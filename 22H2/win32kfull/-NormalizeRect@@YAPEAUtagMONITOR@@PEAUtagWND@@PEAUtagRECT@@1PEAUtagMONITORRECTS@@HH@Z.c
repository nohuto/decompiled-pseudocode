/*
 * XREFs of ?NormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HH@Z @ 0x1C003E3E0
 * Callers:
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C003E8DC (xxxDeferWindowPosAndCheckPoint.c)
 * Callees:
 *     ?xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z @ 0x1C003E464 (-xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069A50 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069AAC (--1UserAtomicCheck@@QEAA@XZ.c)
 */

struct tagMONITOR *__fastcall NormalizeRect(
        struct tagWND *a1,
        struct tagRECT *a2,
        struct tagRECT *a3,
        struct tagMONITORRECTS *a4,
        int a5,
        int a6)
{
  struct tagMONITOR *v10; // rbx
  _BYTE v12[24]; // [rsp+40h] [rbp-18h] BYREF

  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v12);
  v10 = xxxNormalizeRect(a1, a2, a3, a4, a5, a6, 0);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v12);
  return v10;
}
