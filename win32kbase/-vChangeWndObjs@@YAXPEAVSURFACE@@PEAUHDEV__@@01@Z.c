void __fastcall vChangeWndObjs(struct SURFACE *a1, struct PDEV *a2, struct SURFACE *a3, struct PDEV *a4)
{
  __int64 (*v8)(void); // rax
  _QWORD *i; // rbx
  struct SURFACE *v10; // rax
  __int64 j; // rdi
  __int64 k; // rdi
  HSEMAPHORE v13; // [rsp+20h] [rbp-28h] BYREF
  struct PDEV *v14; // [rsp+58h] [rbp+10h] BYREF
  struct PDEV *v15; // [rsp+68h] [rbp+20h] BYREF

  v13 = *(HSEMAPHORE *)(*(_QWORD *)(SGDGetSessionState(a1) + 24) + 56LL);
  EngAcquireSemaphore(v13);
  v8 = qword_1C02D5DB0;
  v14 = a2;
  v15 = a4;
  if ( qword_1C02D5DB0 )
    v8 = (__int64 (*)(void))qword_1C02D5DB0();
  for ( i = *(_QWORD **)v8; i; i = (_QWORD *)i[1] )
  {
    v10 = (struct SURFACE *)i[4];
    if ( v10 == a1 )
    {
      for ( j = i[3]; j; j = *(_QWORD *)(j + 160) )
      {
        PDEVOBJ::vReferencePdev((PDEVOBJ *)&v15);
        PDEVOBJ::vUnreferencePdev(&v14);
      }
    }
    else if ( v10 == a3 )
    {
      for ( k = i[3]; k; k = *(_QWORD *)(k + 160) )
      {
        PDEVOBJ::vReferencePdev((PDEVOBJ *)&v14);
        PDEVOBJ::vUnreferencePdev(&v15);
      }
    }
  }
  SEMOBJ::vUnlock((PERESOURCE *)&v13);
}
