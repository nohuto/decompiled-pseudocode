void __fastcall CCD_TOPOLOGY::_QueryDesktopSurfaceRegionWithRotation(
        const struct D3DKMT_PATHMODALITY_DESCRIPTOR *a1,
        char a2,
        struct _D3DKMDT_2DREGION *a3)
{
  UINT v3; // eax
  int v4; // edx

  if ( (*(_QWORD *)a1 & 0x20000LL) != 0 && !a2 )
  {
    a3->cx = *((_DWORD *)a1 + 38);
    v3 = *((_DWORD *)a1 + 39);
LABEL_4:
    a3->cy = v3;
    return;
  }
  v4 = *((_DWORD *)a1 + 33);
  if ( (unsigned int)(v4 - 5) <= 0xB )
    v4 = (v4 - 1) % 4 + 1;
  if ( (*(_QWORD *)a1 & 0x200LL) != 0 && ((v4 - 1) & 0xFFFFFFFD) != 0 )
  {
    a3->cx = *((_DWORD *)a1 + 25);
    v3 = *((_DWORD *)a1 + 24);
    goto LABEL_4;
  }
  *a3 = *(struct _D3DKMDT_2DREGION *)((char *)a1 + 96);
}
