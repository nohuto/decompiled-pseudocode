/*
 * XREFs of CcMapAndRead @ 0x14021FF20
 * Callers:
 *     CcPinFileData @ 0x14021E620 (CcPinFileData.c)
 *     CcPrepareMdlWrite @ 0x1402FD600 (CcPrepareMdlWrite.c)
 *     CcMapData @ 0x1406A7910 (CcMapData.c)
 * Callees:
 *     MmCheckCachedPageStates @ 0x1402200B0 (MmCheckCachedPageStates.c)
 *     RtlRaiseStatus @ 0x140292590 (RtlRaiseStatus.c)
 */

__int64 __fastcall CcMapAndRead(unsigned int a1, int a2, char a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int8 v5; // bp
  int v7; // edx
  int v8; // r11d
  int v9; // eax
  unsigned __int64 v10; // r14
  int v11; // r10d
  unsigned __int64 v12; // rbx
  unsigned int v13; // edi
  unsigned int v14; // r8d
  int v15; // r15d
  int v16; // eax
  bool v17; // zf
  int v19; // eax
  char v20; // [rsp+60h] [rbp+8h] BYREF
  char v21; // [rsp+70h] [rbp+18h]
  int v22; // [rsp+78h] [rbp+20h]

  v21 = a3;
  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  v7 = 2;
  v8 = 1;
  if ( a3 )
    v7 = 0;
  v20 = 1;
  v9 = BYTE4(CurrentThread[1].Queue);
  v22 = v7;
  v10 = a4 & 0xFFFFFFFFFFFFF000uLL;
  v11 = 0;
  v12 = ((a4 & 0xFFF) + (unsigned __int64)a1 + 4095) >> 12;
  v13 = v9 + 2 * LODWORD(CurrentThread[1].WaitListEntry.Flink);
  if ( (_DWORD)v12 )
  {
    while ( 1 )
    {
      BYTE4(CurrentThread[1].Queue) = 1;
      if ( (unsigned int)(v12 - 1) > LODWORD(CurrentThread[1].WaitListEntry.Flink) )
      {
        v19 = v12 - 1;
        if ( (unsigned int)(v12 - 1) > 0xF )
          v19 = 15;
        LODWORD(CurrentThread[1].WaitListEntry.Flink) = v19;
      }
      v14 = 0;
      if ( a2 )
      {
        v15 = 1;
        if ( v8 == 2 )
          v15 = v12 - 1;
      }
      else
      {
        v15 = v12;
      }
      LOBYTE(v14) = (v8 & a2) != 0;
      v16 = MmCheckCachedPageStates(v10, (unsigned int)(v15 << 12), v7 | v14, &v20);
      v11 = v16;
      if ( !v20 && !v21 )
        break;
      if ( v16 < 0 )
        goto LABEL_13;
      v10 += (unsigned int)(v15 << 12);
      LODWORD(v12) = v12 - v15;
      v8 = 4;
      if ( (_DWORD)v12 != 1 )
        v8 = 2;
      if ( !(_DWORD)v12 )
        goto LABEL_12;
      v7 = v22;
    }
    LODWORD(CurrentThread[1].WaitListEntry.Flink) = v13 >> 1;
    BYTE4(CurrentThread[1].Queue) = v13 & 1;
  }
  else
  {
LABEL_12:
    v5 = 1;
LABEL_13:
    LODWORD(CurrentThread[1].WaitListEntry.Flink) = v13 >> 1;
    v17 = v21 == 0;
    BYTE4(CurrentThread[1].Queue) = v13 & 1;
    if ( !v17 && v11 < 0 )
      RtlRaiseStatus((unsigned int)v11);
  }
  return v5;
}
