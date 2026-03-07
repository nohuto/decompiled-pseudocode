__int64 __fastcall AlpcpFormatConnectionRequest(
        ULONG_PTR *a1,
        unsigned int a2,
        _QWORD *a3,
        __int64 a4,
        unsigned __int16 *a5,
        __int64 a6,
        __int64 a7,
        ULONG_PTR *a8,
        char a9,
        char a10)
{
  char v10; // si
  unsigned __int16 *v11; // r14
  int v12; // r12d
  void *v13; // r15
  __int64 result; // rax
  int v16; // ebx
  ULONG_PTR v17; // rdi
  _WORD *v18; // rcx
  __int16 v19; // ax
  __int16 v20; // dx
  int v21; // r9d
  _QWORD *v22; // rax
  __int64 v23; // rbp
  ULONG_PTR v24; // rcx
  ULONG_PTR v26; // [rsp+80h] [rbp+18h] BYREF

  v10 = a9;
  v11 = a5;
  v12 = a4;
  v26 = 0LL;
  v13 = a3;
  if ( !a4
    || (v22 = (_QWORD *)a3[2], LOBYTE(a3) = a9, result = AlpcpValidateConnectionMessage(*v22, a5, a3), (int)result >= 0) )
  {
    result = AlpcpAllocateMessage(&v26, 0LL, 0LL);
    v16 = result;
    if ( (int)result >= 0 )
    {
      if ( v10 )
      {
        v23 = a7;
        if ( !a7 )
        {
          *(_QWORD *)(v26 + 272) = 0LL;
LABEL_6:
          v18 = (_WORD *)v26;
          *(_OWORD *)(v26 + 248) = *(_OWORD *)&KeGetCurrentThread()[1].CycleTime;
          v19 = *v11;
          v18[120] = *v11;
          v18[121] = v19 + 40;
          v20 = v18[122] & 0xFF00 | 0xA;
          v18[122] = v20;
          if ( !KeGetCurrentThread()->PreviousMode )
            v18[122] = v20 | v11[2] & 0x8000;
          v21 = *v11;
          v17 = v26;
          if ( !(_WORD)v21 || (v16 = AlpcpSetupMessageDataForDeferredCopy(v26, v12, a2, v21, v10, a10), v16 >= 0) )
          {
            if ( v10 )
            {
              v24 = *(_QWORD *)(v17 + 144);
              if ( v24 )
              {
                *a8 = v24;
                AlpcpReferenceBlob(v24);
              }
            }
            *a1 = v17;
            return (unsigned int)v16;
          }
LABEL_22:
          AlpcpUnlockMessage(v17);
          return (unsigned int)v16;
        }
        v17 = v26;
        v16 = AlpcpMapLegacyPortView(v13);
        *(_QWORD *)(v17 + 272) = *(_QWORD *)(v23 + 24);
      }
      else
      {
        v17 = v26;
        v16 = AlpcpCaptureAttributes(v13, a2, a6, v26, v26 + 104);
      }
      if ( v16 < 0 )
        goto LABEL_22;
      goto LABEL_6;
    }
  }
  return result;
}
