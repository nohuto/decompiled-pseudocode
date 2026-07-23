/*
 * XREFs of VerifierKeWaitForMultipleObjects @ 0x1409DC8E0
 * Callers:
 *     <none>
 * Callees:
 *     ViKeObjectAcquired @ 0x1409DD204 (ViKeObjectAcquired.c)
 *     ViKeWaitForMultipleObjectsCommon @ 0x1409DD470 (ViKeWaitForMultipleObjectsCommon.c)
 */

__int64 __fastcall VerifierKeWaitForMultipleObjects(
        int a1,
        __int64 a2,
        int a3,
        int a4,
        char a5,
        char a6,
        __int64 a7,
        __int64 a8)
{
  int v10; // eax
  unsigned int v11; // ebp
  signed int v12; // ecx
  bool v13; // zf
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  void *retaddr; // [rsp+58h] [rbp+0h]

  v10 = ViKeWaitForMultipleObjectsCommon(a1, a2, a3, a4, a5, a6, a7, a8);
  v11 = v10;
  if ( (MmVerifierData & 0x400000) != 0 )
  {
    if ( !ViDeadlockDetectionEnabled )
      return v11;
    v12 = v10 & 0xFFFFFF7F;
    if ( !a5 )
    {
      v13 = v12 == 0;
      goto LABEL_5;
    }
    if ( v10 < 0 || v12 >= a1 )
      return v11;
    v16 = v12;
LABEL_15:
    v15 = 1LL;
    v14 = a2 + 8 * v16;
    goto LABEL_16;
  }
  LODWORD(v16) = v10 & 0xFFFFFF7F;
  if ( a5 )
  {
    if ( (int)v16 < 0 || (int)v16 >= a1 )
      return v11;
    v16 = (int)v16;
    goto LABEL_15;
  }
  v13 = (_DWORD)v16 == 0;
LABEL_5:
  if ( v13 )
  {
    v14 = a2;
    v15 = (unsigned int)a1;
LABEL_16:
    ViKeObjectAcquired(v15, v14, a7, retaddr);
  }
  return v11;
}
