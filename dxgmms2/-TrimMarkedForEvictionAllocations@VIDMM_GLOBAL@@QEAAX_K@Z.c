void __fastcall VIDMM_GLOBAL::TrimMarkedForEvictionAllocations(VIDMM_GLOBAL *this, unsigned __int64 a2)
{
  __int64 i; // rbx
  __int64 v4; // rcx
  unsigned __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 926); i = (unsigned int)(i + 1) )
  {
    v4 = *(_QWORD *)(*((_QWORD *)this + 464) + 8 * i);
    if ( (*(_DWORD *)(v4 + 80) & 0x1001) != 0 && *(_QWORD *)(v4 + 176) != v4 + 176 )
    {
      VIDMM_SEGMENT::TrimMarkedForEvictionAllocations((VIDMM_SEGMENT *)v4, &v5);
      if ( !v5 )
        break;
    }
  }
}
