void __fastcall CitEtwEnableCallback(const struct _GUID *a1, int a2, __int64 a3)
{
  int v3; // ecx
  __int64 v4; // rax
  unsigned __int64 v5; // rbx
  __int128 v6; // [rsp+30h] [rbp-28h]

  if ( (_BYTE)g_CompatImpact && !byte_1C02D4D81 && a2 == 2 && a3 == 2048 && a1 )
  {
    v6 = (__int128)*a1;
    LODWORD(v6) = 0;
    v3 = (unsigned __int16)WORD2(*(_QWORD *)&a1->Data1);
    WORD2(v6) = 0;
    v4 = v6 - *(_QWORD *)&CitControlGuid.Data1;
    if ( (_QWORD)v6 == *(_QWORD *)&CitControlGuid.Data1 )
      v4 = *((_QWORD *)&v6 + 1) - *(_QWORD *)CitControlGuid.Data4;
    if ( !v4 && xmmword_1C02D4DA0 )
    {
      v5 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      switch ( v3 )
      {
        case 1:
          CitpContextFlush(xmmword_1C02D4DA0, v5);
          break;
        case 2:
          CitpSetForegroundProcess(xmmword_1C02D4DA0, v5, 0LL, 0LL, 0LL);
          CitpContextReinitialize(xmmword_1C02D4DA0, v5);
          break;
        case 12:
          CitpResetTracking();
          break;
        case 13:
          CitpInteractionSummariesFlush(xmmword_1C02D4DA0, 0);
          break;
      }
    }
  }
}
