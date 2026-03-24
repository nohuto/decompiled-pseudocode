/*
 * XREFs of ?AddPublicObject@@YAHIPEAXK@Z @ 0x1C021AA4C
 * Callers:
 *     ?xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021B4D8 (-xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxPoke@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021C21C (-xxxPoke@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021C530 (-xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     ?GiveObject@@YAHIPEAXK@Z @ 0x1C021AD4C (-GiveObject@@YAHIPEAXK@Z.c)
 *     ?IsObjectPublic@@YAPEAUtagPUBOBJ@@PEAX@Z @ 0x1C021ADA0 (-IsObjectPublic@@YAPEAUtagPUBOBJ@@PEAX@Z.c)
 */

__int64 __fastcall AddPublicObject(unsigned int a1, void *a2, int a3)
{
  struct tagPUBOBJ *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rax
  int v10; // ecx

  if ( a1 == 2 || a1 == 9 || a1 == 130 )
  {
    v6 = IsObjectPublic(a2);
    if ( v6 )
    {
      v10 = *((_DWORD *)v6 + 4);
      if ( v10 < 2147483646 )
      {
        *((_DWORD *)v6 + 4) = v10 + 1;
        return 1LL;
      }
      UserSetLastError(3221225621LL, v7, v8);
    }
    else
    {
      v9 = Win32AllocPool(24LL, 878998357LL);
      if ( v9 )
      {
        *(_DWORD *)(v9 + 16) = 1;
        *(_QWORD *)(v9 + 8) = a2;
        *(_DWORD *)(v9 + 20) = a3;
        *(_QWORD *)v9 = gpPublicObjectList;
        gpPublicObjectList = v9;
        GiveObject(a1, a2, 0);
        return 1LL;
      }
    }
  }
  return 0LL;
}
