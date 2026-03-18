/*
 * XREFs of ?FxIFRSendRecordsToWpp@@YAJ_KPEAU_WDF_IFR_HEADER@@@Z @ 0x1C003D238
 * Callers:
 *     ?FxIFRReplay@@YAX_K@Z @ 0x1C003CF28 (-FxIFRReplay@@YAX_K@Z.c)
 * Callees:
 *     memset @ 0x1C001D540 (memset.c)
 *     FxWmiTraceMessage @ 0x1C0039BF8 (FxWmiTraceMessage.c)
 *     ?FxIFRValidateRecord@@YAJPEAU_WDF_IFR_RECORD@@_K1@Z @ 0x1C003D4E8 (-FxIFRValidateRecord@@YAJPEAU_WDF_IFR_RECORD@@_K1@Z.c)
 */

__int64 __fastcall FxIFRSendRecordsToWpp(unsigned __int64 LoggerHandle, _WDF_IFR_HEADER *HeaderCopy)
{
  unsigned int Size; // r8d
  unsigned __int8 *Base; // rbp
  unsigned __int64 v4; // r15
  __int64 Previous; // r14
  _WDF_IFR_RECORD *v6; // rsi
  int v7; // ebx
  unsigned int v8; // r10d
  int v9; // r11d
  SIZE_T v10; // r13
  __int64 v11; // rdi
  char v12; // r12
  _WORD *PoolWithTag; // rax
  unsigned int v14; // r9d
  unsigned __int16 v15; // r11
  unsigned __int8 *v16; // rdx
  unsigned __int16 v17; // ax
  unsigned int v19; // [rsp+40h] [rbp-58h]
  char v21; // [rsp+A8h] [rbp+10h]
  _WORD *P; // [rsp+B8h] [rbp+20h]

  Size = HeaderCopy->Size;
  Base = HeaderCopy->Base;
  v21 = 0;
  v4 = (unsigned __int64)&Base[Size - 1];
  v19 = Size / 0x48;
  if ( v4 < (unsigned __int64)Base )
    return (unsigned int)-1073741675;
  if ( v4 < 0x1C )
    return (unsigned int)-1073741675;
  Previous = HeaderCopy->Offset.u.s.Previous;
  v6 = (_WDF_IFR_RECORD *)&Base[Previous];
  if ( &Base[Previous] < Base )
  {
    return (unsigned int)-1073741675;
  }
  else
  {
    v7 = FxIFRValidateRecord((_WDF_IFR_RECORD *)&Base[Previous], v4 - 28, (unsigned __int64)&Base[Size - 1]);
    if ( v7 >= 0 && v6->Signature != (_WORD)v9 )
    {
      v10 = 2LL * v8;
      LODWORD(v11) = v9;
      v12 = v9;
      PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)(v9 + 1), v10, 0x674C7846u);
      P = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, v10);
        if ( v19 )
        {
          while ( 1 )
          {
            v7 = FxIFRValidateRecord(v6, v4 - 28, v4);
            if ( v7 < 0 || v6->Signature != 21068 )
              break;
            P[(unsigned int)v11] = Previous;
            Previous = v6->PrevOffset;
            LODWORD(v11) = v11 + 1;
            if ( v6 == (_WDF_IFR_RECORD *)Base )
              v12 = 1;
            v6 = (_WDF_IFR_RECORD *)&Base[Previous];
            if ( &Base[Previous] < Base )
            {
              v7 = -1073741675;
              break;
            }
            v7 = 0;
            if ( (!v12 || (_WORD)Previous) && (!v21 || (unsigned __int16)Previous > v15) )
            {
              if ( v12 && (_WORD)Previous )
              {
                v21 = 1;
                v12 = 0;
              }
              if ( (unsigned int)v11 < v14 )
                continue;
            }
            break;
          }
          while ( (_DWORD)v11 )
          {
            v11 = (unsigned int)(v11 - 1);
            v16 = &Base[(unsigned __int16)P[v11]];
            v17 = *((_WORD *)v16 + 1);
            if ( v17 <= 0x1Cu )
            {
              if ( v17 != 28 )
                break;
              FxWmiTraceMessage(LoggerHandle, 43LL, (_GUID *)(v16 + 12), *((_WORD *)v16 + 5), 0LL);
            }
            else
            {
              FxWmiTraceMessage(
                LoggerHandle,
                43LL,
                (_GUID *)(v16 + 12),
                *((_WORD *)v16 + 5),
                v16 + 28,
                *((unsigned __int16 *)v16 + 1) - 28LL,
                0LL);
            }
          }
        }
        ExFreePoolWithTag(P, 0x674C7846u);
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  return (unsigned int)v7;
}
