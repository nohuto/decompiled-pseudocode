__int64 __fastcall xxxGetWindowSmIcon(struct tagWND *a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 WindowSmIcon; // rax
  __int64 v10; // rdx
  _BYTE *v11; // rcx
  _QWORD v12[2]; // [rsp+50h] [rbp-18h] BYREF
  __int64 v13; // [rsp+70h] [rbp+8h] BYREF

  SmartObjStackRefBase<tagCLS>::Init(v12, *((_QWORD *)a1 + 17));
  v5 = *((_QWORD *)a1 + 5);
  v6 = *(_QWORD *)(v5 + 264);
  if ( !v6 || (LOBYTE(v4) = 3, (v7 = HMValidateHandleNoSecure(*(_QWORD *)(v5 + 264), v4)) == 0) )
  {
    v7 = *(_QWORD *)(*(_QWORD *)v12[0] + 112LL);
    if ( !v7 )
    {
      v11 = (_BYTE *)*((_QWORD *)a1 + 5);
      if ( (v11[21] & 2) != 0 || (v11[20] & 8) != 0 && (v11[24] & 0x40) != 0 )
        goto LABEL_6;
      if ( a2 )
        goto LABEL_6;
      v13 = 0LL;
      if ( xxxSendTransformableMessageTimeout(a1, 0x37u, 0LL, 0LL, 0, 0x64u, (unsigned __int64 *)&v13, 1, 0) )
        v6 = v13;
      if ( !v6
        || (WindowSmIcon = xxxCreateWindowSmIcon(a1, v6, 0LL),
            LOBYTE(v10) = 3,
            (v7 = HMValidateHandleNoSecure(WindowSmIcon, v10)) == 0) )
      {
LABEL_6:
        v7 = qword_1C035CCF0;
      }
    }
  }
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>((__int64)v12);
  return v7;
}
