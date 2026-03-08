/*
 * XREFs of _DxgDbgBugcheckCallback @ 0x1C0059C70
 * Callers:
 *     <none>
 * Callees:
 *     ?TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N1@Z @ 0x1C004EC88 (-TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N1@Z.c)
 */

void __fastcall DxgDbgBugcheckCallback(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _QWORD *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  __int64 v4; // rcx
  bool v5; // zf
  unsigned int v6; // ecx
  __int128 v7; // xmm0
  unsigned int v8; // eax
  char *v9; // rcx
  unsigned int v10; // edx

  if ( Reason == KbCallbackSecondaryDumpData )
  {
    if ( KiBugCheckData == 278 && qword_1C013D388 )
    {
      v4 = (unsigned int)(dword_1C013D384 - 1);
      if ( dword_1C013D384 != 1 )
      {
        do
        {
          if ( *(_BYTE *)(v4 + qword_1C013D388) )
            break;
          v5 = (_DWORD)v4 == 1;
          v4 = (unsigned int)(v4 - 1);
        }
        while ( !v5 );
      }
      v6 = v4 + 1;
      v7 = xmmword_1C013BB58;
      ReasonSpecificData[4] = qword_1C013D388;
      v8 = *((_DWORD *)ReasonSpecificData + 3);
      *((_OWORD *)ReasonSpecificData + 1) = v7;
      if ( v6 >= v8 )
        v6 = v8;
      *((_DWORD *)ReasonSpecificData + 10) = v6;
    }
    else
    {
      v9 = (char *)ReasonSpecificData[4];
      *((_OWORD *)ReasonSpecificData + 1) = xmmword_1C013BB58;
      if ( v9 )
      {
        v9 = (char *)*ReasonSpecificData;
        v10 = *((_DWORD *)ReasonSpecificData + 2);
        ReasonSpecificData[4] = *ReasonSpecificData;
      }
      else
      {
        v10 = *((_DWORD *)ReasonSpecificData + 3);
      }
      *((_DWORD *)ReasonSpecificData + 10) = TdrCollectBugcheckSecondaryDumpData(v9, v10, 0, 0);
    }
  }
}
