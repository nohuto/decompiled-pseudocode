char __fastcall HKRemoveMatchingChildHotkeys(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  _QWORD *v5; // r14
  char v6; // r10
  _QWORD *v7; // rdi
  _QWORD *v12; // rbx
  _QWORD *v13; // rbp
  bool v14; // zf
  _QWORD *v15; // rcx
  _QWORD *v16; // rax

  v5 = (_QWORD *)(a1 + 56);
  v6 = 0;
  v7 = *(_QWORD **)(a1 + 56);
  if ( v7 != (_QWORD *)(a1 + 56) )
  {
    do
    {
      v12 = v7 - 4;
      v13 = (_QWORD *)*v7;
      if ( a5 )
      {
        if ( a5 == 1 )
        {
          v14 = v12[1] == a3;
        }
        else
        {
          if ( a5 != 2 )
          {
            if ( a5 != 3 )
            {
              if ( a5 == 4 )
                goto LABEL_14;
              goto LABEL_17;
            }
            if ( *v12 != a2 )
              goto LABEL_17;
          }
          if ( v12[1] != a3 )
            goto LABEL_17;
          v14 = *((_DWORD *)v12 + 5) == a4;
        }
      }
      else
      {
        v14 = *v12 == a2;
      }
      if ( v14 )
      {
LABEL_14:
        NotifyHotKeyRegistrationChanged((struct tagHOTKEY *const)a1, (struct tagCHILDHOTKEY *const)(v7 - 4), 0);
        HMAssignmentUnlock(v12 + 1);
        v15 = (_QWORD *)*v7;
        if ( *(_QWORD **)(*v7 + 8LL) != v7 || (v16 = (_QWORD *)v7[1], (_QWORD *)*v16 != v7) )
          __fastfail(3u);
        *v16 = v15;
        v15[1] = v16;
        Win32FreePool(v7 - 4);
        v6 = 1;
      }
LABEL_17:
      v7 = v13;
    }
    while ( v13 != v5 );
  }
  return v6;
}
