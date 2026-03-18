/*
 * XREFs of ?_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z @ 0x1C01505FC
 * Callers:
 *     _GetWindowIcon @ 0x1C0150580 (_GetWindowIcon.c)
 * Callees:
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C00233C4 (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     ?_CreateEmptyCursorObject@@YAPEAUHICON__@@_N@Z @ 0x1C0023634 (-_CreateEmptyCursorObject@@YAPEAUHICON__@@_N@Z.c)
 *     HMValidateHandle @ 0x1C0024F44 (HMValidateHandle.c)
 *     ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x1C0025910 (-_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z.c)
 *     ?_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z @ 0x1C0026768 (-_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z.c)
 *     GetDpiDependentMetric @ 0x1C006718C (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C006878C (GetDpiForSystem.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

struct tagCURSOR *__fastcall _DuplicateCursor(struct tagCURSOR *a1)
{
  struct tagCURSOR *v1; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 EmptyCursorObject; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int DpiForSystem; // eax
  unsigned int DpiDependentMetric; // eax
  size_t Size; // [rsp+28h] [rbp-79h]
  __int128 v12; // [rsp+38h] [rbp-69h] BYREF
  __int128 v13; // [rsp+48h] [rbp-59h]
  struct _UNICODE_STRING v14; // [rsp+58h] [rbp-49h] BYREF
  _OWORD v15[9]; // [rsp+68h] [rbp-39h] BYREF
  size_t v16; // [rsp+110h] [rbp+6Fh] BYREF

  v1 = 0LL;
  LODWORD(v16) = 0;
  v12 = 0LL;
  v13 = 0LL;
  if ( _InternalGetIconInfo(a1, (struct _ICONINFO *)&v12, 0LL, 0LL, (unsigned int *)&v16, 0) )
  {
    EmptyCursorObject = _CreateEmptyCursorObject(0, v3, v4);
    v1 = (struct tagCURSOR *)HMValidateHandle(EmptyCursorObject, 3u);
    if ( v1 )
    {
      v14 = 0LL;
      memset(v15, 0, 0x88uLL);
      if ( (_DWORD)v12 )
        LOWORD(v15[1]) = 3;
      else
        LOWORD(v15[1]) = 1;
      LODWORD(v15[5]) = v16;
      *(_QWORD *)((char *)&v15[5] + 4) = *(_QWORD *)((char *)a1 + 140);
      WORD6(v15[1]) = WORD2(v12);
      HIWORD(v15[1]) = WORD4(v12);
      v15[2] = v13;
      DpiForSystem = GetDpiForSystem(v7, v6);
      DpiDependentMetric = GetDpiDependentMetric(7LL, DpiForSystem);
      LODWORD(Size) = 0;
      if ( !_SetCursorIconDataEx(v1, &v14, &v14, (struct tagCURSORDATA *)v15, Size, DpiDependentMetric) )
      {
        _DestroyCursor(v1, 0);
        return 0LL;
      }
    }
    else
    {
      GreDeleteObject(v13);
      GreDeleteObject(*((_QWORD *)&v13 + 1));
    }
  }
  return v1;
}
