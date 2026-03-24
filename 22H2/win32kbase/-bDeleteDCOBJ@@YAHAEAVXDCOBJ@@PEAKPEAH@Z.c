/*
 * XREFs of ?bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z @ 0x1C003C98C
 * Callers:
 *     bDeleteDCInternalEx @ 0x1C003C730 (bDeleteDCInternalEx.c)
 *     ??1DCMEMOBJ@@QEAA@XZ @ 0x1C003C8A0 (--1DCMEMOBJ@@QEAA@XZ.c)
 * Callees:
 *     ?HmgLockObjectForRemoval@@YAPEAXPEAUHOBJ__@@JJHEPEAK@Z @ 0x1C0080BC8 (-HmgLockObjectForRemoval@@YAPEAXPEAUHOBJ__@@JJHEPEAK@Z.c)
 *     ??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z @ 0x1C00820C8 (--0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z.c)
 *     ??1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C008386C (--1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C00934E0 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     EngSetLastError @ 0x1C009F430 (EngSetLastError.c)
 *     ?HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z @ 0x1C013F100 (-HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z.c)
 *     ?vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z @ 0x1C014D314 (-vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z.c)
 */

__int64 __fastcall bDeleteDCOBJ(struct HOBJ__ ***a1, unsigned int *a2, int *a3)
{
  int v3; // esi
  struct HOBJ__ **v5; // rcx
  unsigned int *v6; // rax
  unsigned int v7; // ebx
  int v8; // eax
  ULONG v9; // ecx
  int v11; // edx
  int v12; // r8d
  int v13; // r9d
  unsigned __int8 v14; // [rsp+20h] [rbp-18h]
  unsigned int *v15; // [rsp+28h] [rbp-10h]
  char v16; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v5 = *a1;
  if ( a2 )
  {
    *((_DWORD *)v5 + 9) |= *a2 & 0x1C00000;
    v6 = a2;
    v5 = *a1;
  }
  else
  {
    v6 = (unsigned int *)v5 + 9;
  }
  v7 = *v6;
  v8 = *((_DWORD *)v5 + 9);
  if ( (v8 & 8) != 0 )
  {
    if ( (v7 & 0x400000) != 0 )
      *((_DWORD *)v5 + 9) = v8 & 0xFFFFFFF7;
    else
      v3 = 1;
  }
  *a3 = v3;
  if ( !a2 && !(unsigned int)HmgQueryRemoveAttempted(**a1, 0) )
  {
    v9 = 5023;
LABEL_11:
    EngSetLastError(v9);
    return 0LL;
  }
  if ( *((_WORD *)*a1 + 6) > 1u && (v7 & 0x1C00000) == 0 )
  {
    v9 = 170;
    goto LABEL_11;
  }
  if ( v3 )
  {
    XDCOBJ::bCleanDC((XDCOBJ *)a1, HIBYTE(v7) & 1);
  }
  else
  {
    NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK(
      (NEEDDYNAMICMODECHANGESHARELOCK *)&v16,
      ((*((_DWORD *)(*a1)[6] + 10) >> 7) & 1) == 0);
    if ( !HmgLockObjectForRemoval(**a1, v11, v12, v13, v14, v15) )
    {
      EngSetLastError(0xAAu);
      NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)&v16);
      return 0LL;
    }
    XDCOBJ::bCleanDC((XDCOBJ *)a1, HIBYTE(v7) & 1);
    NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)&v16);
    vDeleteDCInternalWorker((struct XDCOBJ *)a1, (v7 >> 23) & 1);
  }
  return 1LL;
}
