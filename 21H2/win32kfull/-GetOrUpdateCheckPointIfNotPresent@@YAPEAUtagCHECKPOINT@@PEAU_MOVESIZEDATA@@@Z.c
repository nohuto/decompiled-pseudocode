/*
 * XREFs of ?GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAU_MOVESIZEDATA@@@Z @ 0x1C020AE98
 * Callers:
 *     ?SizeRect@@YAHPEAU_MOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z @ 0x1C020C24C (-SizeRect@@YAHPEAU_MOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z.c)
 *     ?xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C020FCC4 (-xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z.c)
 * Callees:
 *     CkptRestore @ 0x1C0041290 (CkptRestore.c)
 *     GetRect @ 0x1C0063F28 (GetRect.c)
 *     _GetProp @ 0x1C006B990 (_GetProp.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 */

struct tagCHECKPOINT *__fastcall GetOrUpdateCheckPointIfNotPresent(struct _MOVESIZEDATA *a1)
{
  __int64 v2; // rcx
  struct tagCHECKPOINT *Prop; // rcx
  struct tagCHECKPOINT *result; // rax
  int v5; // eax
  __int128 v6; // xmm0
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF

  v2 = *((_QWORD *)a1 + 2);
  v7 = 0LL;
  Prop = (struct tagCHECKPOINT *)GetProp(v2, (unsigned __int16)WPP_MAIN_CB.DeviceQueue.Type, 1LL);
  if ( Prop
    || (GetRect(*((_QWORD *)a1 + 2), (__int64)&v7, 66),
        result = (struct tagCHECKPOINT *)CkptRestore(*((_QWORD *)a1 + 2), &v7),
        (Prop = result) != 0LL) )
  {
    v5 = *((_DWORD *)a1 + 49);
    if ( (v5 & 0x1000000) == 0 )
    {
      v6 = *(_OWORD *)Prop;
      *((_DWORD *)a1 + 49) = v5 | 0x1000000;
      *(_OWORD *)((char *)a1 + 152) = v6;
    }
    return Prop;
  }
  return result;
}
