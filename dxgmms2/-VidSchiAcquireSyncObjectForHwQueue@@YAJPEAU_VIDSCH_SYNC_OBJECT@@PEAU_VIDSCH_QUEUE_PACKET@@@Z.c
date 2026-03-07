__int64 __fastcall VidSchiAcquireSyncObjectForHwQueue(struct _VIDSCH_SYNC_OBJECT *a1, struct _VIDSCH_QUEUE_PACKET *a2)
{
  __int64 v2; // r11
  char v3; // r10
  char v4; // si
  __int64 v5; // rbx
  __int64 v6; // rdi
  int v8; // r9d
  int v9; // r9d
  int v10; // r9d
  unsigned __int64 v11; // r9
  unsigned __int64 *v12; // rax
  char *v13; // rax
  char *v14; // rdx
  char **v15; // r9
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // r9
  int v19; // r9d
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rax
  _QWORD *v23; // rdx
  _QWORD *v24; // r9

  v2 = *((_QWORD *)a2 + 12);
  v3 = 0;
  v4 = 0;
  v5 = *(_QWORD *)(*(_QWORD *)(v2 + 40) + 8LL);
  v6 = *(_QWORD *)(v5 + 32);
  if ( *((_DWORD *)a1 + 9) == 0x7FFFFFFF )
  {
    WdLogSingleEntry0(1LL);
    ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Synchronization object already has MAX_LONG reference pending, can't reference more.\n",
      2767LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225473LL;
  }
  v8 = *((_DWORD *)a1 + 12);
  if ( !v8 )
  {
    if ( *((_QWORD *)a1 + 8) )
      goto LABEL_41;
    if ( !*((_QWORD *)a1 + 7) )
    {
      v21 = *((_QWORD *)a2 + 11);
      if ( !v21 )
        v21 = *((_QWORD *)a2 + 12);
      *((_QWORD *)a1 + 7) = v21;
      v3 = 1;
    }
    v22 = *((_QWORD *)a2 + 11);
    if ( !v22 )
      v22 = *((_QWORD *)a2 + 12);
    *((_QWORD *)a1 + 8) = v22;
    goto LABEL_53;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v19 = *((_DWORD *)a1 + 16);
    if ( !v19 )
    {
LABEL_41:
      WdLogSingleEntry0(3LL);
      return 3221225473LL;
    }
    v20 = *((_DWORD *)a1 + 14);
    if ( v20 )
    {
      v3 = 1;
      *((_DWORD *)a1 + 14) = v20 - 1;
    }
    *((_DWORD *)a1 + 16) = v19 - 1;
LABEL_53:
    if ( !v3 )
      goto LABEL_15;
    goto LABEL_54;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    if ( *((_BYTE *)a1 + 27) )
      v17 = *(_QWORD *)(*((_QWORD *)a1 + 26) + 40LL);
    else
      v17 = *((_QWORD *)a1 + 8);
    if ( v17 < *((_QWORD *)a2 + 38) )
    {
      if ( !*((_BYTE *)a1 + 25) )
      {
        WdLogSingleEntry0(1LL);
        ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Trying to wait the fence without signal having been submitted.\n",
          2852LL,
          0LL,
          0LL,
          0LL,
          0LL);
        return 3221225473LL;
      }
LABEL_28:
      ++*((_DWORD *)a1 + 10);
      v4 = 1;
      ++*(_DWORD *)(v2 + 156);
      ++*(_DWORD *)(v5 + 1588);
      ++*(_DWORD *)(v6 + 816);
      *((_DWORD *)a2 + 68) |= 4u;
      goto LABEL_15;
    }
    if ( *((_BYTE *)a1 + 27) )
      v18 = *(_QWORD *)(*((_QWORD *)a1 + 26) + 32LL);
    else
      v18 = *((_QWORD *)a1 + 9);
    if ( v18 >= *((_QWORD *)a2 + 38) )
      goto LABEL_54;
LABEL_15:
    if ( (unsigned int)(*((_DWORD *)a1 + 12) - 4) <= 1 )
    {
      v23 = (_QWORD *)((char *)a2 + 288);
      v24 = *(_QWORD **)(v6 + 832);
      if ( *v24 == v6 + 824 )
      {
        *v23 = v6 + 824;
        v23[1] = v24;
        *v24 = v23;
        *(_QWORD *)(v6 + 832) = v23;
        goto LABEL_59;
      }
    }
    else
    {
      v13 = (char *)a2 + 288;
      if ( v4 )
        v14 = (char *)a1 + 112;
      else
        v14 = (char *)a1 + 96;
      v15 = (char **)*((_QWORD *)v14 + 1);
      if ( *v15 == v14 )
      {
        *(_QWORD *)v13 = v14;
        *((_QWORD *)v13 + 1) = v15;
        *v15 = v13;
        *((_QWORD *)v14 + 1) = v13;
LABEL_59:
        _InterlockedAdd((volatile signed __int32 *)a1 + 9, 1u);
        return 0LL;
      }
    }
    __fastfail(3u);
  }
  if ( (unsigned int)(v10 - 2) > 1 )
    goto LABEL_15;
  v11 = *((_QWORD *)a2 + 38);
  if ( !*((_BYTE *)a1 + 28) )
  {
    v12 = (unsigned __int64 *)*((_QWORD *)a1 + 8);
    if ( *((_BYTE *)a1 + 29) )
    {
      if ( *v12 >= v11 )
        goto LABEL_54;
LABEL_13:
      if ( *((_QWORD *)a1 + 10) )
      {
        ++*(_DWORD *)(v6 + 820);
        *((_DWORD *)a2 + 68) |= 8u;
        goto LABEL_15;
      }
      if ( !*((_BYTE *)a1 + 30) && (unsigned int)(((2 * *((_DWORD *)a1 + 13)) >> 1) - 3) > 1 )
        goto LABEL_28;
      if ( *((_BYTE *)a1 + 27) )
        v16 = *(_QWORD *)(*((_QWORD *)a1 + 26) + 40LL);
      else
        v16 = *((_DWORD *)a1 + 12) == 2 ? *((_QWORD *)a1 + 8) : *((_QWORD *)a1 + 11);
      if ( *((_QWORD *)a2 + 38) > v16 )
        goto LABEL_28;
      goto LABEL_15;
    }
    if ( *(_DWORD *)v12 - (int)v11 < 0 )
      goto LABEL_13;
  }
LABEL_54:
  *((_DWORD *)a2 + 68) |= 1u;
  return 0LL;
}
