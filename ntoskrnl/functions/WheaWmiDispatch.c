__int64 __fastcall WheaWmiDispatch(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5, _DWORD *a6)
{
  int v6; // ecx
  int v7; // ecx
  __int64 v8; // rcx
  __int64 v10; // rcx

  if ( (int)a1 <= 5 )
  {
    if ( (_DWORD)a1 == 5 )
      goto LABEL_6;
    if ( (_DWORD)a1 )
    {
      v10 = (unsigned int)(a1 - 1);
      if ( (_DWORD)v10 )
        goto LABEL_6;
      return WheapWmiGetSingleInstance(v10, a3, a4, a6);
    }
    else
    {
      return WheapWmiGetAllData(a1, a3, a4, a6);
    }
  }
  else
  {
    v6 = a1 - 6;
    if ( !v6 )
      goto LABEL_6;
    v7 = v6 - 1;
    if ( !v7 )
      goto LABEL_6;
    v8 = (unsigned int)(v7 - 1);
    if ( (_DWORD)v8 )
    {
      if ( (_DWORD)v8 != 1 )
      {
LABEL_6:
        *a6 = 0;
        return 3221225488LL;
      }
      return WheapWmiExecuteMethod(a2, a3, a4, a6);
    }
    else
    {
      return WheapWmiRegisterInfo(v8, a3, a4, a6);
    }
  }
}
