__int64 __fastcall KiHvEnlightenedGuestPriorityKick(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  int v5; // r8d
  bool v6; // zf
  __int64 v7; // r8
  __int64 v8; // rbx
  _DWORD v9[2]; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v10[2]; // [rsp+38h] [rbp-20h] BYREF

  result = *(_QWORD *)(a2 + 35000);
  if ( result )
  {
    if ( *(_QWORD *)(a1 + 35000) )
    {
      if ( a1 != a2 )
      {
        v5 = *(_DWORD *)result;
        result = *(_DWORD *)result & 0x40000;
        if ( (v5 & 0x100000) != 0 || (_DWORD)result && (result = (unsigned __int8)v5, (unsigned __int8)v5 < a3) )
        {
          v6 = HvlpVirtualProcessorsIdentityMapped == 0;
          v7 = *(_QWORD *)(a1 + 35000);
          *(_DWORD *)(v7 + 12) = 2;
          v8 = *(unsigned int *)(a2 + 36);
          if ( v6 )
            LODWORD(v8) = HvlpVirtualProcessorMapping[2 * (unsigned int)v8 + 1] | (HvlpVirtualProcessorMapping[2 * v8] << 6);
          *(_DWORD *)(v7 + 8) = v8;
          if ( (BYTE4(xmmword_140D1EAD0) & 0x20) != 0 )
          {
            v9[0] = *(_DWORD *)(a2 + 36);
            v9[1] = 2;
            v10[0] = v9;
            v10[1] = 8LL;
            EtwTraceKernelEvent((unsigned int)v10, 1, -1610612704, 3957, 4196866);
          }
          return HvlSetGuestSchedulerEventRegister((unsigned int)v8);
        }
      }
    }
  }
  return result;
}
