char __fastcall SeCheckForCriticalAceRemoval(__int64 a1, __int64 a2, __int64 *a3, _BYTE *a4)
{
  int AllocatedFullProcessImageName; // eax
  _KPROCESS *CurrentThreadProcess; // rax
  int v7; // r8d
  __int64 v8; // rdx
  char v10; // [rsp+30h] [rbp-19h] BYREF
  _BYTE v11[7]; // [rsp+31h] [rbp-18h] BYREF
  unsigned __int16 *v12; // [rsp+38h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+40h] [rbp-9h] BYREF
  _DWORD *v14; // [rsp+60h] [rbp+17h]
  int v15; // [rsp+68h] [rbp+1Fh]
  int v16; // [rsp+6Ch] [rbp+23h]
  __int64 v17; // [rsp+70h] [rbp+27h]
  _DWORD v18[2]; // [rsp+78h] [rbp+2Fh] BYREF

  v12 = 0LL;
  v10 = 0;
  v11[0] = 0;
  LOBYTE(AllocatedFullProcessImageName) = (unsigned __int8)SepCheckForCriticalAceRemoval(a1, a2, a3, &v10, v11);
  if ( v10 )
  {
    if ( !v11[0] )
    {
      CurrentThreadProcess = PsGetCurrentThreadProcess();
      AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx(CurrentThreadProcess, &v12);
      if ( AllocatedFullProcessImageName >= 0 && (unsigned int)dword_140C06528 > 5 )
      {
        LOBYTE(AllocatedFullProcessImageName) = tlgKeywordOn((__int64)&dword_140C06528, 0x200000000000LL);
        if ( (_BYTE)AllocatedFullProcessImageName )
        {
          v7 = *v12;
          v8 = *((_QWORD *)v12 + 1);
          v16 = 0;
          v18[1] = 0;
          v14 = v18;
          v17 = v8;
          v18[0] = v7;
          v15 = 2;
          LOBYTE(AllocatedFullProcessImageName) = tlgWriteTransfer_EtwWriteTransfer(
                                                    (__int64)&dword_140C06528,
                                                    (unsigned __int8 *)&byte_140033FC7,
                                                    0LL,
                                                    0LL,
                                                    4u,
                                                    &v13);
        }
      }
    }
  }
  *a4 = 0;
  return AllocatedFullProcessImageName;
}
