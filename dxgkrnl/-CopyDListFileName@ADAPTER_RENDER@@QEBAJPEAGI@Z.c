__int64 __fastcall ADAPTER_RENDER::CopyDListFileName(ADAPTER_RENDER *this, char *a2)
{
  __int64 v4; // rdx
  char *v5; // r8
  unsigned __int16 v6; // ax

  if ( (*((_DWORD *)DXGPROCESS::GetCurrent((__int64)this) + 106) & 8) != 0 )
  {
    v5 = (char *)*((_QWORD *)this + 79);
    v6 = *((_WORD *)this + 312);
  }
  else
  {
    v5 = (char *)*((_QWORD *)this + 77);
    v6 = *((_WORD *)this + 304);
  }
  if ( a2 )
    *(_WORD *)a2 = 0;
  return RtlStringCbCopyNW(a2, v4, v5, v6);
}
