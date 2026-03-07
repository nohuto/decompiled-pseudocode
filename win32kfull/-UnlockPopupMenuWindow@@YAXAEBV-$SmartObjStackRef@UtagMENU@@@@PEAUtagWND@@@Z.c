char __fastcall UnlockPopupMenuWindow(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 *v3; // rcx
  _QWORD *v4; // r9
  __int64 v5; // rcx
  __int64 v6; // rax
  bool v7; // zf
  __int64 v8; // rcx
  __int64 v9; // rax
  bool v10; // zf

  LOBYTE(v1) = SmartObjStackRef<tagMENU>::operator==(a1);
  if ( !(_BYTE)v1 )
  {
    v1 = *v3;
    if ( *(_QWORD *)(*(_QWORD *)*v3 + 80LL) )
    {
      v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)*v3 + 80LL) + 168LL);
      v6 = v4[2];
      v7 = v6 ? v6 == v5 : *(_QWORD *)*v4 == v5;
      LOBYTE(v1) = v7;
      if ( !v7 )
      {
        v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)*v4 + 80LL) + 160LL);
        v9 = v4[2];
        if ( v9 )
          v10 = v9 == v8;
        else
          v10 = *(_QWORD *)*v4 == v8;
        LOBYTE(v1) = v10;
        if ( !v10 )
        {
          if ( v2 == *(_QWORD *)(*(_QWORD *)*v4 + 80LL)
            || (v1 = *(_QWORD *)(*(_QWORD *)*v4 + 80LL), *(char *)(*(_QWORD *)(v1 + 40) + 19LL) < 0) )
          {
            LOBYTE(v1) = HMAssignmentUnlock(*(_QWORD *)*v4 + 80LL);
          }
        }
      }
    }
  }
  return v1;
}
