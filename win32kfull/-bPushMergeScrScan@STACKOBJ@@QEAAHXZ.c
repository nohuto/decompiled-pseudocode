__int64 __fastcall STACKOBJ::bPushMergeScrScan(STACKOBJ *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  int v6; // edi
  unsigned int v7; // edi
  unsigned int v8; // edx
  unsigned int v9; // ebp
  _DWORD *v10; // rdx
  __int64 v11; // r8

  v4 = *((_QWORD *)this + 2);
  v6 = *(_DWORD *)(v4 + 4);
  if ( v6 )
  {
    v7 = 8 * v6 + 24;
    v8 = v7 + *((_DWORD *)this + 1);
    v9 = v7;
    if ( v8 > *(_DWORD *)this && !(unsigned int)STACKOBJ::bExpand(this, v8, a3, a4) )
      return 0LL;
    *(_QWORD *)(v4 + 16) = *((_QWORD *)this + 1);
    if ( *((_DWORD *)this + 1) )
    {
      v10 = (_DWORD *)*((_QWORD *)this + 1);
      v11 = (unsigned int)v10[2];
      if ( *v10 == **((_DWORD **)this + 2) )
      {
        v7 = v11 + v7 - 24;
        v9 -= 24;
        if ( v7 > *(_DWORD *)(*((_QWORD *)this + 3) + 8LL)
          && !(unsigned int)STACKOBJ::bExpandScanline(this, v7, 1LL, a4) )
        {
          return 0LL;
        }
        **((_DWORD **)this + 3) = **((_DWORD **)this + 2);
        *(_QWORD *)(*((_QWORD *)this + 3) + 16LL) = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
        *(_DWORD *)(*((_QWORD *)this + 3) + 4LL) = *(_DWORD *)(*((_QWORD *)this + 2) + 4LL)
                                                 + *(_DWORD *)(*((_QWORD *)this + 1) + 4LL);
        vMergeSpans(
          (struct _SPAN *)(*((_QWORD *)this + 1) + 24LL),
          (struct _SPAN *)(*((_QWORD *)this + 1) + 8 * (*(unsigned int *)(*((_QWORD *)this + 1) + 4LL) + 3LL)),
          (struct _SPAN *)(*((_QWORD *)this + 2) + 24LL),
          (struct _SPAN *)(*((_QWORD *)this + 2) + 8 * (*(unsigned int *)(*((_QWORD *)this + 2) + 4LL) + 3LL)),
          (struct _SPAN *)(*((_QWORD *)this + 3) + 24LL));
        v4 = *((_QWORD *)this + 3);
      }
      else
      {
        *((_QWORD *)this + 1) = (char *)v10 + v11;
      }
    }
    *((_DWORD *)this + 1) += v9;
    *(_DWORD *)(v4 + 8) = v7;
    memmove(*((void **)this + 1), (const void *)v4, v7);
  }
  return 1LL;
}
