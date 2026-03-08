/*
 * XREFs of CmpRegisterCallbackInternal @ 0x14084E7EC
 * Callers:
 *     CmRegisterCallbackEx @ 0x14084E720 (CmRegisterCallbackEx.c)
 *     CmRegisterInternalCallback @ 0x14084E76C (CmRegisterInternalCallback.c)
 *     CmRegisterCallback @ 0x14084E7C0 (CmRegisterCallback.c)
 * Callees:
 *     CmCleanupThreadInfo @ 0x140263740 (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x140263760 (CmpInitializeThreadInfo.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     CmpInsertCallbackInListByAltitude @ 0x14084E8FC (CmpInsertCallbackInListByAltitude.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpRegisterCallbackInternal(
        __int64 a1,
        __int64 a2,
        const void **a3,
        char a4,
        unsigned __int8 a5,
        _QWORD *a6)
{
  _QWORD *Pool2; // rax
  _QWORD *v11; // rbx
  _QWORD *v12; // rax
  void *v13; // rax
  __int64 v14; // rdx
  int inserted; // edi
  void *v17; // rcx
  __int64 v18[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v18 = 0LL;
  CmpInitializeThreadInfo((__int64)v18);
  Pool2 = (_QWORD *)ExAllocatePool2(256LL, 80LL, 1650675011LL);
  v11 = Pool2;
  if ( !Pool2 )
  {
    inserted = -1073741670;
    goto LABEL_4;
  }
  Pool2[1] = Pool2;
  *Pool2 = Pool2;
  v12 = Pool2 + 8;
  v11[4] = a2;
  v11[5] = a1;
  v12[1] = v12;
  *v12 = v12;
  LODWORD(v12) = (*((_DWORD *)v11 + 5) ^ a5) & 1;
  *((_DWORD *)v11 + 4) = 0;
  *((_DWORD *)v11 + 5) ^= (unsigned int)v12;
  LOWORD(v12) = *(_WORD *)a3;
  *((_WORD *)v11 + 25) = *(_WORD *)a3;
  *((_WORD *)v11 + 24) = (_WORD)v12;
  v13 = (void *)ExAllocatePool2(256LL, *(unsigned __int16 *)a3, 1633897795LL);
  v11[7] = v13;
  if ( v13 )
  {
    memmove(v13, a3[1], *(unsigned __int16 *)a3);
    LOBYTE(v14) = a4;
    inserted = CmpInsertCallbackInListByAltitude(v11, v14);
    *a6 = v11[3];
    if ( inserted >= 0 )
      goto LABEL_4;
  }
  else
  {
    inserted = -1073741670;
  }
  v17 = (void *)v11[7];
  if ( v17 )
    ExFreePoolWithTag(v17, 0);
  ExFreePoolWithTag(v11, 0);
LABEL_4:
  CmCleanupThreadInfo(v18);
  return (unsigned int)inserted;
}
