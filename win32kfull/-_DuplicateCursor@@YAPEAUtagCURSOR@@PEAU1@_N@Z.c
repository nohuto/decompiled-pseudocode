/*
 * XREFs of ?_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z @ 0x1C01C1D64
 * Callers:
 *     _GetWindowIcon @ 0x1C01E48BC (_GetWindowIcon.c)
 * Callees:
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C0041464 (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     GetDpiForSystem @ 0x1C0045E5C (GetDpiForSystem.c)
 *     ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x1C0060888 (-_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z.c)
 *     HMValidateHandle @ 0x1C0064BF4 (HMValidateHandle.c)
 *     ?_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z @ 0x1C0064DB8 (-_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z.c)
 *     GetDpiDependentMetric @ 0x1C00A45B4 (GetDpiDependentMetric.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     ?_CreateEmptyCursorObject@@YAPEAUHICON__@@_N@Z @ 0x1C01C1CD0 (-_CreateEmptyCursorObject@@YAPEAUHICON__@@_N@Z.c)
 */

struct tagCURSOR *__fastcall _DuplicateCursor(struct tagCURSOR *a1)
{
  struct tagCURSOR *v1; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 EmptyCursorObject; // rax
  __int64 v6; // rcx
  int DpiForSystem; // eax
  unsigned int DpiDependentMetric; // eax
  size_t Size; // [rsp+28h] [rbp-79h]
  __int128 v11; // [rsp+38h] [rbp-69h] BYREF
  __int128 v12; // [rsp+48h] [rbp-59h]
  struct _UNICODE_STRING v13; // [rsp+58h] [rbp-49h] BYREF
  _BYTE v14[16]; // [rsp+68h] [rbp-39h] BYREF
  __int16 v15; // [rsp+78h] [rbp-29h]
  __int16 v16; // [rsp+84h] [rbp-1Dh]
  __int16 v17; // [rsp+86h] [rbp-1Bh]
  __int128 v18; // [rsp+88h] [rbp-19h]
  int v19; // [rsp+B8h] [rbp+17h]
  int v20; // [rsp+BCh] [rbp+1Bh]
  int v21; // [rsp+C0h] [rbp+1Fh]
  size_t v22; // [rsp+110h] [rbp+6Fh] BYREF

  v1 = 0LL;
  LODWORD(v22) = 0;
  v11 = 0LL;
  v12 = 0LL;
  if ( _InternalGetIconInfo(a1, (struct _ICONINFO *)&v11, 0LL, 0LL, (unsigned int *)&v22, 0) )
  {
    EmptyCursorObject = _CreateEmptyCursorObject(0, v3, v4);
    v1 = (struct tagCURSOR *)HMValidateHandle(EmptyCursorObject, 3u);
    if ( v1 )
    {
      v13 = 0LL;
      memset_0(v14, 0, 0x88uLL);
      if ( (_DWORD)v11 )
        v15 = 3;
      else
        v15 = 1;
      v19 = v22;
      v20 = *((_DWORD *)a1 + 35);
      v21 = *((_DWORD *)a1 + 36);
      v16 = WORD2(v11);
      v17 = WORD4(v11);
      v18 = v12;
      DpiForSystem = GetDpiForSystem(v6);
      DpiDependentMetric = GetDpiDependentMetric(7, DpiForSystem);
      LODWORD(Size) = 0;
      if ( !_SetCursorIconDataEx(v1, &v13, &v13, (struct tagCURSORDATA *)v14, Size, DpiDependentMetric) )
      {
        _DestroyCursor(v1, 0);
        return 0LL;
      }
    }
    else
    {
      GreDeleteObject(v12);
      GreDeleteObject(*((_QWORD *)&v12 + 1));
    }
  }
  return v1;
}
