unsigned __int64 __fastcall KiSwapDirectoryTableBaseTarget(
        __int64 a1,
        __int64 a2,
        volatile signed __int32 *a3,
        __int64 a4)
{
  __int64 v4; // rbp
  signed __int32 v8; // eax
  unsigned int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 result; // rax
  unsigned int v14; // edi
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  int v18; // [rsp+58h] [rbp+10h] BYREF
  int i; // [rsp+68h] [rbp+20h] BYREF

  v4 = *(_QWORD *)(a2 + 8);
  v8 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v9 = ~v8 & 0x80000000;
  if ( (v8 & 0x7FFFFFFF) != 0 )
  {
    v18 = 0;
    while ( (*(_DWORD *)a4 & 0x80000000) != v9 )
      KeYieldProcessorEx(&v18);
  }
  else
  {
    *(_DWORD *)a4 = *(_DWORD *)(a4 + 4) | v9;
  }
  if ( (unsigned int)MmStealTopLevelPage(*(_QWORD *)(a2 + 16)) )
    *(_BYTE *)a2 = 1;
  result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)a4);
  v14 = ~(_DWORD)result & 0x80000000;
  if ( (result & 0x7FFFFFFF) != 0 )
  {
    for ( i = 0; ; KeYieldProcessorEx(&i) )
    {
      result = *(_DWORD *)a4 & 0x80000000;
      if ( (_DWORD)result == v14 )
        break;
    }
  }
  else
  {
    *(_DWORD *)a4 = *(_DWORD *)(a4 + 4) | v14;
  }
  if ( *(_BYTE *)a2 )
  {
    result = (unsigned __int64)KeGetCurrentThread();
    if ( *(_QWORD *)(result + 184) == v4 )
    {
      v15 = *(_QWORD *)(v4 + 40);
      if ( KiKvaShadow )
      {
        v16 = v15 | 0x8000000000000000uLL;
        if ( (v15 & 2) == 0 )
          v16 = *(_QWORD *)(v4 + 40);
        __writegsqword(0xA000u, v16);
        KiSetAddressPolicy();
      }
      result = (unsigned int)HvlEnlightenments;
      if ( (HvlEnlightenments & 1) != 0 )
        result = HvlSwitchVirtualAddressSpace(v15, v10, v11, v12);
      else
        __writecr3(v15);
      if ( !KiFlushPcid && KiKvaShadow )
      {
        v17 = __readcr4();
        if ( (v17 & 0x20080) != 0 )
        {
          result = v17 ^ 0x80;
          __writecr4(v17 ^ 0x80);
          __writecr4(v17);
        }
        else
        {
          result = __readcr3();
          __writecr3(result);
        }
      }
    }
  }
  _InterlockedDecrement(a3);
  return result;
}
