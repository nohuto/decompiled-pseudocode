__int64 __fastcall CBaseInput::PopulateDispatcherObjectWithCustomInputEvents(
        CBaseInput *this,
        struct CEventBitmap *a2,
        struct IRegisterInputDispatcherObjects *a3)
{
  __int64 v6; // rdi
  unsigned int v7; // edx
  _QWORD v9[18]; // [rsp+20h] [rbp-B8h] BYREF

  memset(v9, 0, sizeof(v9));
  v6 = 0LL;
  *(_DWORD *)a2 = 0;
  v7 = 0;
  while ( *((_DWORD *)a2 + 1) && (unsigned int)v6 < 0x12 )
  {
    if ( (*((_BYTE *)a2 + 4) & 1) != 0 && CRIMBase::IsDispatcherObjectValid(this, v7) )
    {
      v9[v6] = CRIMBase::GetDispatcherObjectByIndex(this, *(_DWORD *)a2);
      v6 = (unsigned int)(v6 + 1);
    }
    ++*(_DWORD *)a2;
    *((_DWORD *)a2 + 1) >>= 1;
    v7 = *(_DWORD *)a2;
  }
  return (*(__int64 (__fastcall **)(struct IRegisterInputDispatcherObjects *, _QWORD, _QWORD *))(*(_QWORD *)a3 + 8LL))(
           a3,
           (unsigned int)v6,
           v9);
}
