__int64 __fastcall PspIumGetPhysicalPage(__int64 a1)
{
  unsigned int v1; // r15d
  unsigned __int64 v2; // rbx
  _KPROCESS *v4; // rsi
  __int64 v5; // rcx
  _KPROCESS *Process; // r14
  __int64 v7; // rax
  int v8; // ebx
  __int64 result; // rax
  __int64 v10; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v11[2]; // [rsp+28h] [rbp-48h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v12; // [rsp+38h] [rbp-38h] BYREF

  v1 = *(_DWORD *)(a1 + 8);
  v2 = *(_QWORD *)(a1 + 16);
  v4 = *(_KPROCESS **)(a1 + 24);
  v5 = *(_QWORD *)(a1 + 32);
  v10 = 0LL;
  memset(&v12, 0, sizeof(v12));
  if ( v5 && *(_DWORD *)(v5 + 4) < 8u )
    PspIumReplenishPartitionPages(v5, 3u);
  if ( v2 > 0x7FFFFFFEFFFFLL )
  {
    v8 = -1073741819;
  }
  else
  {
    v11[1] = 4096LL;
    v11[0] = v2 & 0xFFFFFFFFFFFFF000uLL;
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( Process != v4 )
      KiStackAttachProcess(v4, 0, (__int64)&v12);
    v7 = v10;
    while ( 1 )
    {
      v10 = v7 & 0xFFFFFFFFFFFFFLL;
      v8 = MmVirtualAccessFault(v11, &v10, v1);
      if ( v8 < 0 )
        break;
      v7 = v10;
      if ( (v10 & 0x10000000000000LL) != 0 )
      {
        *(_QWORD *)(a1 + 16) = v10;
        break;
      }
    }
    if ( Process != v4 )
      KiUnstackDetachProcess(&v12);
  }
  result = v8;
  *(_QWORD *)(a1 + 8) = v8;
  return result;
}
