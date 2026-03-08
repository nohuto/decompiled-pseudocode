/*
 * XREFs of ?xxxImmProcessKey@@YAKPEAUtagQ@@PEAUtagWND@@I_K_J@Z @ 0x1C00DA8CC
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?CheckImeHotKey@@YAPEAU_tagIMEHOTKEYOBJ@@PEAUtagQ@@I_J@Z @ 0x1C00DAA80 (-CheckImeHotKey@@YAPEAU_tagIMEHOTKEYOBJ@@PEAUtagQ@@I_J@Z.c)
 *     GetAppImeCompatFlags @ 0x1C00DABBC (GetAppImeCompatFlags.c)
 *     ClientImmProcessKey @ 0x1C00DABE4 (ClientImmProcessKey.c)
 *     _PostMessage @ 0x1C00EF0A0 (_PostMessage.c)
 */

__int64 __fastcall xxxImmProcessKey(struct tagQ *a1, struct tagWND *a2, int a3, unsigned __int16 a4, __int64 a5)
{
  __int64 v8; // rdi
  __int64 v9; // rsi
  int v10; // ebx
  struct _tagIMEHOTKEYOBJ *v11; // rax
  int v12; // r15d
  int v13; // ecx
  int v14; // edx
  unsigned int v15; // ebx
  __int64 v17; // r9

  if ( ((a3 - 256) & 0xFFFFFFFA) != 0 )
    return 0LL;
  v8 = 0LL;
  v9 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 440LL);
  if ( !v9 )
    return 0LL;
  v10 = (unsigned __int8)a4;
  v11 = CheckImeHotKey(a1, (unsigned __int8)a4, a5);
  if ( v11 )
  {
    v12 = *((_DWORD *)v11 + 2);
    v17 = *((_QWORD *)v11 + 3);
    if ( (unsigned int)(v12 - 256) > 0x1F )
      goto LABEL_5;
    if ( *(_QWORD *)(v9 + 40) != v17 )
    {
      LOBYTE(v8) = (*(_DWORD *)(v9 + 64) & gSystemFS) != 0;
      PostMessage(a2, 80LL, v8, v17);
    }
    return (GetAppImeCompatFlags(*((_QWORD *)a2 + 2)) & 0x800000) == 0;
  }
  v12 = -1;
LABEL_5:
  if ( (*gpsi & 4) == 0 )
    return 0LL;
  if ( v12 == -1 )
  {
    if ( !*(_QWORD *)(v9 + 80)
      || !_HMObjectFromHandle(*(_QWORD *)(*((_QWORD *)a2 + 5) + 208LL))
      || (a5 & 0x80000000) != 0 && (*(_DWORD *)(*(_QWORD *)(v9 + 80) + 12LL) & 4) != 0 )
    {
      return 0LL;
    }
    if ( (unsigned int)(v10 - 241) > 0xA || (v13 = 1779, v14 = 1, !_bittest(&v13, v10 - 241)) )
      v14 = 0;
    if ( (unsigned int)(a3 - 260) <= 1 && v10 != 18 && v10 != 121 && !v14
      || (*(_DWORD *)(*(_QWORD *)(v9 + 80) + 12LL) & 8) == 0 && !v14 && (v10 == 18 || (a5 & 0x20000000) != 0) )
    {
      return 0LL;
    }
  }
  if ( v10 == 231 )
    v10 = a4 | (*(unsigned __int16 *)(gptiCurrent + 882LL) << 16);
  v15 = ClientImmProcessKey(*(_QWORD *)a2, *(_QWORD *)(v9 + 40), v10, a5, v12);
  if ( (GetAppImeCompatFlags(*((_QWORD *)a2 + 2)) & 0x800000) != 0 )
    v15 &= ~1u;
  return v15;
}
