void __fastcall CDrawingContext::RecordBitmapRealizationInfo(CDrawingContext *this, struct IBitmapRealization *a2)
{
  int v4; // ebx
  __int64 v5; // rcx
  int v6; // eax
  char *v7; // rcx
  __int64 v8; // rax
  int v9; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v10[4]; // [rsp+24h] [rbp-24h] BYREF
  _BYTE v11[16]; // [rsp+28h] [rbp-20h] BYREF

  (*(void (__fastcall **)(struct IBitmapRealization *, int *))(*(_QWORD *)a2 + 16LL))(a2, &v9);
  v4 = v9;
  if ( v9 != DisplayId::None && v9 != DisplayId::All )
  {
    v5 = *((_QWORD *)this + 4) + 8LL + *(int *)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 16LL);
    v6 = *(_DWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v5 + 8LL))(v5, v10);
    if ( v4 == DisplayId::None || v4 == v6 || v6 == DisplayId::All )
      *((_BYTE *)this + 8093) = 1;
    else
      *((_BYTE *)this + 8095) = 1;
  }
  if ( (*(unsigned __int8 (__fastcall **)(struct IBitmapRealization *))(*(_QWORD *)a2 + 24LL))(a2) )
  {
    if ( *((_BYTE *)g_pComposition + 1274) )
      *((_BYTE *)this + 8095) = 1;
    else
      *((_BYTE *)this + 8092) = 1;
  }
  v7 = (char *)a2 + *(int *)(*((_QWORD *)a2 + 1) + 8LL) + 8;
  v8 = (**(__int64 (__fastcall ***)(char *, _BYTE *))v7)(v7, v11);
  if ( IsDXGIColorSpaceHDR(*(_DWORD *)(v8 + 8)) )
    *((_BYTE *)this + 8094) = 1;
}
