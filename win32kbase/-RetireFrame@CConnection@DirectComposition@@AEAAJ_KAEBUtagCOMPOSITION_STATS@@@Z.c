__int64 __fastcall DirectComposition::CConnection::RetireFrame(
        DirectComposition::CConnection *this,
        __int64 a2,
        const struct tagCOMPOSITION_STATS *a3)
{
  DirectComposition::CConnection *v3; // rdi
  int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // edx
  __int64 v11; // [rsp+20h] [rbp-50h] BYREF
  int v12; // [rsp+28h] [rbp-48h] BYREF
  int v13; // [rsp+2Ch] [rbp-44h]
  int v14; // [rsp+30h] [rbp-40h]
  __int128 v15; // [rsp+34h] [rbp-3Ch]
  int v16; // [rsp+44h] [rbp-2Ch]
  int v17; // [rsp+48h] [rbp-28h] BYREF
  int v18; // [rsp+4Ch] [rbp-24h]
  int v19; // [rsp+50h] [rbp-20h]
  __int128 v20; // [rsp+54h] [rbp-1Ch]
  int v21; // [rsp+64h] [rbp-Ch]

  v3 = DirectComposition::CConnection::s_pSessionConnection;
  v11 = 0LL;
  v6 = -1073741275;
  v7 = *((_QWORD *)DirectComposition::CConnection::s_pSessionConnection + 23);
  if ( v7 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v7 + 32LL))(v7, a2, &v11);
    if ( v6 >= 0 )
    {
      v8 = *((_QWORD *)a3 + 2);
      v9 = *(_DWORD *)a3;
      v18 = *((_DWORD *)a3 + 2);
      v19 = v18;
      v21 = 0;
      v13 = *((_DWORD *)a3 + 1);
      v14 = v13;
      v20 = 0LL;
      *(_QWORD *)((char *)&v20 + 4) = v8;
      v15 = 0LL;
      *(_QWORD *)((char *)&v15 + 4) = v8;
      v16 = 0;
      v17 = v9;
      v12 = v9;
      (*(void (__fastcall **)(__int64, int *, int *))(*(_QWORD *)v11 + 24LL))(v11, &v17, &v12);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v3 + 23) + 24LL))(*((_QWORD *)v3 + 23), a2);
    }
  }
  return (unsigned int)v6;
}
