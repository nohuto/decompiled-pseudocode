/*
 * XREFs of sub_180029B80 @ 0x180029B80
 * Callers:
 *     sub_180029880 @ 0x180029880 (sub_180029880.c)
 *     sub_18012B740 @ 0x18012B740 (sub_18012B740.c)
 * Callees:
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180109778 @ 0x180109778 (sub_180109778.c)
 */

__int64 __fastcall sub_180029B80(_QWORD *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  LPUNKNOWN v4; // rcx
  __int64 v5; // rcx
  int v6; // esi
  LPUNKNOWN ppunkMarshal; // [rsp+40h] [rbp-48h] BYREF
  __int64 v9; // [rsp+48h] [rbp-40h] BYREF
  __int64 v10; // [rsp+50h] [rbp-38h] BYREF
  __int64 v11; // [rsp+58h] [rbp-30h] BYREF
  __int64 v12; // [rsp+90h] [rbp+8h] BYREF
  __int64 v13; // [rsp+98h] [rbp+10h] BYREF
  __int64 v14; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v15; // [rsp+A8h] [rbp+20h] BYREF

  v9 = 0LL;
  if ( a1 )
  {
    *a1 = 0LL;
    v2 = sub_18006A18C(88LL, &unk_18019F848);
    if ( v2 )
    {
      ppunkMarshal = 0LL;
      *(_QWORD *)(v2 + 8) = &off_180146ED0;
      *(_QWORD *)(v2 + 32) = 0LL;
      if ( CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal) >= 0 )
      {
        v3 = *(_QWORD *)(v2 + 32);
        if ( v3 )
        {
          *(_QWORD *)(v2 + 32) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
        }
        ((void (__fastcall *)(LPUNKNOWN, void *, __int64))ppunkMarshal->lpVtbl->QueryInterface)(
          ppunkMarshal,
          &unk_18015B8E0,
          v2 + 32);
      }
      v4 = ppunkMarshal;
      if ( ppunkMarshal )
      {
        ppunkMarshal = 0LL;
        ((void (__fastcall *)(LPUNKNOWN))v4->lpVtbl->Release)(v4);
      }
      v5 = qword_18019E418;
      *(_QWORD *)v2 = off_180146EA8;
      *(_QWORD *)(v2 + 8) = off_180146E38;
      *(_DWORD *)(v2 + 44) = 1;
      if ( v5 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      *(_QWORD *)v2 = off_180146E80;
      *(_QWORD *)(v2 + 8) = off_180146E38;
      InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v2 + 48), 0, 0);
      v6 = (**(__int64 (__fastcall ***)(__int64, void *, __int64 *))v2)(v2, &unk_18015B8D0, &v9);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
      if ( v6 >= 0 )
      {
        v6 = (**(__int64 (__fastcall ***)(__int64, void *, _QWORD *))v9)(v9, &unk_18015B8D0, a1);
        goto LABEL_13;
      }
    }
    else
    {
      v6 = -2147024882;
    }
    if ( (unsigned int)dword_18019C480 > 2 )
    {
      LODWORD(v14) = v6;
      v11 = (__int64)"Create_SpatialAudioPositionCalc";
      LODWORD(v15) = 156;
      sub_180109778((int)&dword_18019C480, (__int64)&v11, (__int64)&v15, (__int64)&v14);
    }
  }
  else
  {
    if ( (unsigned int)dword_18019C480 > 2 )
    {
      LODWORD(v12) = -2147024809;
      v10 = (__int64)"Create_SpatialAudioPositionCalc";
      LODWORD(v13) = 151;
      sub_180109778((int)&dword_18019C480, (__int64)&v10, (__int64)&v13, (__int64)&v12);
    }
    v6 = -2147024809;
  }
LABEL_13:
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  return (unsigned int)v6;
}
