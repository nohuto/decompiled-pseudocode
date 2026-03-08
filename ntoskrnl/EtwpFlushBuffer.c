/*
 * XREFs of EtwpFlushBuffer @ 0x140692C18
 * Callers:
 *     EtwpFlushActiveBuffers @ 0x14069310C (EtwpFlushActiveBuffers.c)
 *     EtwpBufferingModeFlush @ 0x1408A3088 (EtwpBufferingModeFlush.c)
 * Callees:
 *     EtwpFileModeCompress @ 0x1403A127C (EtwpFileModeCompress.c)
 *     EtwpFlushBufferToLogfile @ 0x140691270 (EtwpFlushBufferToLogfile.c)
 *     EtwpFlushBufferToRealtime @ 0x140692B74 (EtwpFlushBufferToRealtime.c)
 *     EtwpPrepareHeader @ 0x140692D04 (EtwpPrepareHeader.c)
 *     EtwpSendSessionNotification @ 0x1407489B8 (EtwpSendSessionNotification.c)
 */

__int64 __fastcall EtwpFlushBuffer(__int64 a1, unsigned int *a2, __int64 a3)
{
  unsigned int v3; // edi
  char v4; // r14
  int v5; // esi
  unsigned int *v6; // rbp
  int v8; // eax
  char v9; // r14
  int v10; // eax
  int v12; // eax
  int v13; // eax

  v3 = -1073741823;
  v4 = a3;
  v5 = -1073741823;
  v6 = a2;
  v8 = EtwpPrepareHeader(a1, a2, a3);
  v9 = v4 & 1;
  if ( v8 == -2147483614 && !v9 )
    return 0LL;
  if ( (*(_DWORD *)(a1 + 816) & 8) != 0 )
  {
    v10 = EtwpFlushBufferToRealtime(a1, (__int64)v6, v8 == -2147483614);
    v3 = v10;
    if ( v10 < 0 )
      EtwpSendSessionNotification(a1, 4LL, (unsigned int)v10);
  }
  if ( *(_QWORD *)(a1 + 800) )
  {
    v12 = *(_DWORD *)(a1 + 12);
    if ( (v12 & 0x4000000) != 0 && (v12 & 1) != 0 && !(unsigned int)EtwpFileModeCompress(a1, (__int64)v6) )
      v6 = *(unsigned int **)(a1 + 1152);
    v13 = EtwpFlushBufferToLogfile(a1, v6);
    v5 = v13;
    if ( v13 < 0 )
      EtwpSendSessionNotification(a1, 3LL, (unsigned int)v13);
  }
  if ( (int)(v3 + 0x80000000) < 0 || v3 == -1073741432 || v5 >= 0 )
    return 0LL;
  if ( v5 != -1073741823 )
    return (unsigned int)v5;
  return v3;
}
