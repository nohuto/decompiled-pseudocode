__int64 __fastcall LockDesktopMenu(__int64 a1, _QWORD **a2)
{
  _QWORD *v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  _QWORD v10[2]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v11[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v12; // [rsp+40h] [rbp-10h]

  SmartObjStackRefBase<tagMENU>::Init(v11, 0LL);
  v12 = 0LL;
  if ( !SmartObjStackRef<tagMENU>::operator==((__int64)a2)
    && *(_DWORD *)(*(_QWORD *)(**a2 + 40LL) + 44LL)
    && *(_QWORD *)(*(_QWORD *)(**a2 + 88LL) + 16LL) )
  {
    *(_DWORD *)(*(_QWORD *)(**a2 + 40LL) + 40LL) |= 0x40u;
    v4 = a2[2];
    v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 40LL) + 56LL) + 16LL);
    if ( !v4 )
      v4 = (_QWORD *)**a2;
    HMChangeOwnerProcess(v4, v5);
    v6 = *(_QWORD *)(*(_QWORD *)(**a2 + 88LL) + 16LL);
    v12 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v11, v6);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v11[0] + 40LL) + 40LL) |= 0x40u;
    v7 = v12;
    if ( !v12 )
      v7 = *(_QWORD *)v11[0];
    HMChangeOwnerProcess(v7, v5);
    v8 = a2[2];
    if ( !v8 )
      v8 = (_QWORD *)**a2;
    v10[0] = a1;
    v10[1] = v8;
    HMAssignmentLock(v10, 0LL);
    SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v11);
    return 1LL;
  }
  else
  {
    SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v11);
    return 0LL;
  }
}
