/*
 * XREFs of xxxImmProcessKey @ 0x1C01068C4
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00C1DC0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     _PostMessage @ 0x1C002DBA0 (_PostMessage.c)
 *     CheckImeHotKey @ 0x1C0106A7C (CheckImeHotKey.c)
 *     GetAppImeCompatFlags @ 0x1C0106BA4 (GetAppImeCompatFlags.c)
 *     ClientImmProcessKey @ 0x1C0106BCC (ClientImmProcessKey.c)
 */

__int64 __fastcall xxxImmProcessKey(__int64 a1, _QWORD *a2, int a3, unsigned __int16 a4, __int64 a5)
{
  int v8; // edi
  __int64 v9; // rsi
  int v10; // ebx
  __int64 v11; // rax
  int v12; // ebp
  __int64 v13; // r9
  int v14; // ecx
  int v15; // edx
  unsigned int v16; // ebx

  if ( ((a3 - 256) & 0xFFFFFFFA) != 0 )
    return 0LL;
  v8 = 0;
  v9 = *(_QWORD *)(a2[2] + 440LL);
  if ( !v9 )
    return 0LL;
  v10 = (unsigned __int8)a4;
  v11 = CheckImeHotKey(a1, (unsigned __int8)a4, a5);
  if ( v11 )
  {
    v12 = *(_DWORD *)(v11 + 8);
    v13 = *(_QWORD *)(v11 + 24);
  }
  else
  {
    v12 = -1;
    v13 = 0LL;
  }
  if ( (unsigned int)(v12 - 256) <= 0x1F )
  {
    if ( *(_QWORD *)(v9 + 40) != v13 )
    {
      LOBYTE(v8) = (*(_DWORD *)(v9 + 64) & gSystemFS) != 0;
      PostMessage((int)a2, 80, v8, v13);
    }
    return (GetAppImeCompatFlags(a2[2]) & 0x800000) == 0;
  }
  if ( (*gpsi & 4) == 0 )
    return 0LL;
  if ( v12 == -1 )
  {
    if ( !*(_QWORD *)(v9 + 80)
      || !_HMObjectFromHandle(*(_QWORD *)(a2[5] + 208LL))
      || (a5 & 0x80000000) != 0 && (*(_DWORD *)(*(_QWORD *)(v9 + 80) + 12LL) & 4) != 0 )
    {
      return 0LL;
    }
    if ( (unsigned int)(v10 - 241) > 0xA || (v14 = 1779, v15 = 1, !_bittest(&v14, v10 - 241)) )
      v15 = 0;
    if ( (unsigned int)(a3 - 260) <= 1 && v10 != 18 && v10 != 121 && !v15
      || (*(_DWORD *)(*(_QWORD *)(v9 + 80) + 12LL) & 8) == 0 && !v15 && (v10 == 18 || (a5 & 0x20000000) != 0) )
    {
      return 0LL;
    }
  }
  if ( v10 == 231 )
    v10 = a4 | (*(unsigned __int16 *)(gptiCurrent + 874LL) << 16);
  v16 = ClientImmProcessKey(*a2, *(_QWORD *)(v9 + 40), v10, a5, v12);
  if ( (GetAppImeCompatFlags(a2[2]) & 0x800000) != 0 )
    v16 &= ~1u;
  return v16;
}
