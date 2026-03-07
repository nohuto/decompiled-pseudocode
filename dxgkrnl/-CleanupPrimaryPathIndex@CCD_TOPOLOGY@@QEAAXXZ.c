void __fastcall CCD_TOPOLOGY::CleanupPrimaryPathIndex(CCD_TOPOLOGY *this)
{
  unsigned int i; // r8d
  __int64 v3; // rdx
  unsigned __int16 v4; // ax
  __int64 v5; // rcx

  for ( i = 0; ; ++i )
  {
    v3 = *((_QWORD *)this + 8);
    v4 = v3 ? *(_WORD *)(v3 + 20) : 0;
    if ( i >= v4 )
      break;
    v5 = 296LL * i;
    *(_DWORD *)(v5 + v3 + 324) = -27918336;
  }
}
