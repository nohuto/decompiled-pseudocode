struct HOBJ__ *__fastcall GreCreatePolyPolygonRgnInternal(struct _POINTL *a1, __int64 a2, int a3, int a4, int a5)
{
  struct HOBJ__ *v5; // rbx
  char v6; // di
  PVOID Entry[2]; // [rsp+38h] [rbp-51h] BYREF
  _BYTE v11[8]; // [rsp+48h] [rbp-41h] BYREF
  __int64 v12; // [rsp+50h] [rbp-39h]
  _QWORD v13[4]; // [rsp+98h] [rbp+Fh] BYREF
  int v14; // [rsp+B8h] [rbp+2Fh]

  v5 = 0LL;
  v6 = a4;
  if ( (unsigned int)(a4 - 1) <= 1 )
  {
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v11);
    if ( v12 )
    {
      EXFORMOBJ::EXFORMOBJ((EXFORMOBJ *)Entry, 1LL, 8);
      if ( (unsigned int)bPolyPolygon((EPATHOBJ *)v11, (struct EXFORMOBJ *)Entry, a1, a3, a5) )
      {
        RGNMEMOBJ::vCreate((RGNMEMOBJ *)Entry, (struct EPATHOBJ *)v11, v6, 0LL);
        if ( Entry[0] )
        {
          v5 = RGNOBJ::hrgnAssociate((struct OBJECT **)Entry);
          if ( !v5 )
            REGION::vDeleteREGION((unsigned __int64)Entry[0]);
        }
      }
    }
    EPATHOBJ::vUnlock((EPATHOBJ *)v11);
    if ( v14 )
      PopThreadGuardedObject(v13);
  }
  return v5;
}
