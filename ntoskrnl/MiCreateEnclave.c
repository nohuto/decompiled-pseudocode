/*
 * XREFs of MiCreateEnclave @ 0x140A3A9F4
 * Callers:
 *     NtCreateEnclave @ 0x140A3BE40 (NtCreateEnclave.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14031EDC0 (MiUnlockAndDereferenceVad.c)
 *     MiDeleteVad @ 0x1407C82E0 (MiDeleteVad.c)
 *     MiAllocateEnclaveVad @ 0x140A3A010 (MiAllocateEnclaveVad.c)
 *     MiCreateHardwareEnclave @ 0x140A3AB10 (MiCreateHardwareEnclave.c)
 *     MiCreateVsmEnclave @ 0x140A3AE48 (MiCreateVsmEnclave.c)
 */

__int64 __fastcall MiCreateEnclave(
        int a1,
        unsigned __int64 *a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        int a8,
        __int64 a9)
{
  int EnclaveVad; // eax
  _QWORD *v12; // rbx
  int v13; // edi
  int VsmEnclave; // eax
  PVOID P[3]; // [rsp+30h] [rbp-18h] BYREF

  P[0] = 0LL;
  EnclaveVad = MiAllocateEnclaveVad(a6, a4, *a2, a3, (__int64 *)P);
  v12 = P[0];
  v13 = EnclaveVad;
  if ( EnclaveVad >= 0 )
  {
    *a2 = (*((unsigned int *)P[0] + 6) | ((unsigned __int64)*((unsigned __int8 *)P[0] + 32) << 32)) << 12;
    if ( (unsigned int)(a6 - 16) <= 1 )
    {
      v12[11] = v12 + 10;
      v12[10] = v12 + 10;
      VsmEnclave = MiCreateVsmEnclave(a1, (_DWORD)v12, a6, a7, a8);
    }
    else
    {
      if ( a8 != 4096 )
      {
        v13 = -1073741811;
        goto LABEL_8;
      }
      VsmEnclave = MiCreateHardwareEnclave(a1, (_DWORD)v12, a5, a7, a9);
    }
    v13 = VsmEnclave;
  }
LABEL_8:
  if ( v12 )
  {
    if ( v13 >= 0 )
      MiUnlockAndDereferenceVad(v12);
    else
      MiDeleteVad((unsigned int *)v12, 0LL, 0);
  }
  return (unsigned int)v13;
}
