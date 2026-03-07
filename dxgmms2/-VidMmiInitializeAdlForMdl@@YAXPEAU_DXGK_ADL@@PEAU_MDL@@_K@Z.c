void __fastcall VidMmiInitializeAdlForMdl(struct _DXGK_ADL *a1, struct _MDL *a2, unsigned __int64 a3)
{
  *((_DWORD *)a1 + 1) = 0;
  *(_DWORD *)a1 = a2->ByteCount >> 12;
  if ( a3 )
  {
    *((_QWORD *)a1 + 1) = a3 >> 12;
    *((_DWORD *)a1 + 1) = 1;
  }
  else
  {
    *((_QWORD *)a1 + 1) = a2 + 1;
  }
}
