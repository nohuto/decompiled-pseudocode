__int64 __fastcall EtwpValidateEnableNotification(__int64 a1, __int64 a2, char a3, __int64 a4, __int64 *a5, __int64 a6)
{
  unsigned int v6; // ebx
  bool v7; // cf
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  bool v15; // zf
  int v16; // eax
  unsigned int v17; // eax
  int v19; // eax

  v6 = 0;
  v7 = *(_DWORD *)(a2 + 4) < 0x78u;
  *a5 = 0LL;
  if ( v7 || *(_DWORD *)(a2 + 116) && (unsigned int)EtwpValidateFilterDescriptors(a2, a6) || *(_DWORD *)(a2 + 72) > 2u )
    return 3221225485LL;
  v12 = *(unsigned __int16 *)(a2 + 78);
  *(_BYTE *)(a4 + 18) = (v12 & 0x8000) != 0;
  if ( (v12 & 0x8000) != 0 )
  {
    v19 = *(_DWORD *)(a2 + 80);
    if ( (v19 & 0x20) != 0 || (v19 & 0x400) != 0 )
      return 3221225485LL;
  }
  else
  {
    if ( (_DWORD)v12 == 3 )
      return 3221225506LL;
    v13 = PrivateLoggerNotificationGuid - *(_QWORD *)(a2 + 40);
    if ( (_QWORD)PrivateLoggerNotificationGuid == *(_QWORD *)(a2 + 40) )
      v13 = *((_QWORD *)&PrivateLoggerNotificationGuid + 1) - *(_QWORD *)(a2 + 48);
    if ( !v13 )
      return 3221225485LL;
    v14 = EtwpAcquireLoggerContextByLoggerId(a1, v12, 0LL);
    if ( !v14 )
      goto LABEL_30;
    v15 = a1 == EtwpHostSiloState;
    *a5 = v14;
    if ( !v15 && (*(_DWORD *)(a2 + 80) & 0x400) != 0
      || (*(_DWORD *)(a2 + 80) & 0x20) != 0 && (*(_DWORD *)(v14 + 12) & 0x1030800) != 0 )
    {
      return 3221225485LL;
    }
    if ( (*(_DWORD *)(v14 + 816) & 0x40) != 0 )
    {
LABEL_30:
      v6 = -1073741162;
    }
    else
    {
      *(_OWORD *)a4 = *(_OWORD *)(v14 + 276);
      if ( (*(_DWORD *)(v14 + 12) & 0x80u) != 0 )
        *(_BYTE *)(a4 + 16) = 1;
      if ( (*(_DWORD *)(v14 + 12) & 0x1000000) != 0 )
        *(_BYTE *)(a4 + 17) = 1;
      if ( a3 )
        v6 = EtwpCheckNotificationAccess(a2 + 40, a4);
    }
  }
  v16 = *(_DWORD *)(a2 + 80);
  if ( (v16 & 0x10) != 0 )
    v17 = v16 & 0xFFFFFFEF;
  else
    v17 = v16 | 0x40;
  *(_DWORD *)(a2 + 80) = v17;
  return v6;
}
