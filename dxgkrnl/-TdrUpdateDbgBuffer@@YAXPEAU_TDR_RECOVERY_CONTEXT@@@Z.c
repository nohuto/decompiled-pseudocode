void __fastcall TdrUpdateDbgBuffer(struct _TDR_RECOVERY_CONTEXT *a1)
{
  _DWORD *v2; // rcx

  if ( *((_QWORD *)a1 + 356) )
  {
    if ( *((_QWORD *)a1 + 357) )
    {
      v2 = (_DWORD *)*((_QWORD *)a1 + 360);
      if ( v2 )
      {
        if ( *v2 == 1380209782 && v2[681] == 1380209782 )
          memmove(v2, (char *)a1 + 112, 0xAA8uLL);
      }
    }
  }
}
