__int64 __fastcall CCompositionSurface::GetRenderingRealizationInfo(
        CCompositionSurface *this,
        struct CSM_SURFACE_UPDATE_ *a2)
{
  char *v2; // rdi
  int v5; // ebp
  char *v6; // rbx
  char *v7; // r12
  char *v8; // r14
  __int64 v9; // rax
  CBufferRealization *v10; // rcx
  CBufferRealization *v12; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0LL;
  v5 = -1073741823;
  if ( !*((_DWORD *)this + 22) )
    goto LABEL_9;
  v6 = (char *)*((_QWORD *)this + 10);
  v7 = (char *)this + 72;
  if ( v6 == (char *)this + 72 )
    goto LABEL_9;
  do
  {
    v8 = v6 - 24;
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *))(*((_QWORD *)v6 - 3) + 24LL))((_QWORD *)v6 - 3) )
      break;
    v6 = (char *)*((_QWORD *)v6 + 1);
    v2 = v8;
  }
  while ( v6 != v7 );
  if ( v2 )
  {
    v9 = *(_QWORD *)v2;
    v12 = 0LL;
    v5 = (*(__int64 (__fastcall **)(char *, CBufferRealization **))(v9 + 232))(v2, &v12);
    if ( v5 >= 0 )
    {
      *(_DWORD *)a2 = 3 - ((*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)v2 + 168LL))(v2) != 0);
      v10 = v12;
      *(_QWORD *)((char *)a2 + 4) = *((_QWORD *)this - 2);
      *((_QWORD *)a2 + 2) = *((_QWORD *)v2 + 2);
      *((_DWORD *)a2 + 6) = *((_DWORD *)v10 + 7);
      *((_DWORD *)a2 + 7) = *((_DWORD *)v2 + 69);
      CBufferRealization::OpenLifetimeDirtyRegion(v10, (HRGN *)a2 + 4);
      *((_DWORD *)a2 + 10) = 0;
      *(_OWORD *)((char *)a2 + 72) = *((_OWORD *)v2 + 3);
      *(_OWORD *)((char *)a2 + 88) = *((_OWORD *)v2 + 4);
      *(_OWORD *)((char *)a2 + 104) = *((_OWORD *)v2 + 5);
      *(_OWORD *)((char *)a2 + 120) = *((_OWORD *)v2 + 6);
      *(_OWORD *)((char *)a2 + 136) = *((_OWORD *)v2 + 7);
      *(_OWORD *)((char *)a2 + 152) = *((_OWORD *)v2 + 8);
      *(_OWORD *)((char *)a2 + 168) = *((_OWORD *)v2 + 9);
      *(_OWORD *)((char *)a2 + 184) = *((_OWORD *)v2 + 10);
      *(_OWORD *)((char *)a2 + 200) = *((_OWORD *)v2 + 11);
      *((_DWORD *)a2 + 54) = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v2 + 192LL))(v2);
      *((_DWORD *)a2 + 55) = *((_DWORD *)v12 + 20);
    }
  }
  else
  {
LABEL_9:
    *((_QWORD *)a2 + 2) = 0LL;
  }
  return (unsigned int)v5;
}
