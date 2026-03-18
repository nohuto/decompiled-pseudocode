/*
 * XREFs of ApiSetEditionLLMouseButtonHook @ 0x1C0206C24
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C01F9484 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionLLMouseButtonHook(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4, int a5)
{
  unsigned int v5; // ebx
  __int64 v10; // xmm0_8
  __int64 v12; // [rsp+30h] [rbp-18h] BYREF
  int v13; // [rsp+38h] [rbp-10h]

  v5 = 0;
  if ( qword_1C0296388 )
  {
    if ( (int)qword_1C0296388() >= 0 )
    {
      v10 = *a4;
      if ( qword_1C0296390 )
      {
        v13 = *((_DWORD *)a4 + 2);
        v12 = v10;
        return (unsigned int)((__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64 *, int))qword_1C0296390)(
                               a1,
                               a2,
                               a3,
                               &v12,
                               a5);
      }
    }
  }
  return v5;
}
