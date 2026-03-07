__int64 __fastcall CHolographicComposition::ProcessSetQualityLevel(
        CHolographicComposition *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_HOLOGRAPHICCOMPOSITION_SETQUALITYLEVEL *a3)
{
  __int64 v3; // rdx
  CHolographicInteropTaskQueue *v4; // r10

  v3 = *((_QWORD *)this + 11);
  if ( v3 )
  {
    if ( *((_BYTE *)this + 117) )
    {
      *((_DWORD *)this + 28) = *((_DWORD *)a3 + 2);
      if ( *((_BYTE *)this + 116) )
      {
        v4 = *(CHolographicInteropTaskQueue **)(v3 + 48);
        if ( v4 )
        {
          if ( *(_BYTE *)(v3 + 240) )
            CHolographicInteropTaskQueue::PostMessageW(
              v4,
              0xBu,
              (struct IUnknown *)(((unsigned __int64)this + 72) & -(__int64)(this != 0LL)),
              0LL,
              0LL,
              0LL,
              0LL);
        }
      }
    }
  }
  return 0LL;
}
