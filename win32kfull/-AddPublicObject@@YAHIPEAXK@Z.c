/*
 * XREFs of ?AddPublicObject@@YAHIPEAXK@Z @ 0x1C01FA95C
 * Callers:
 *     ?xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01FB620 (-xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxPoke@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01FC880 (-xxxPoke@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01FCC90 (-xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?GiveObject@@YAHIPEAXK@Z @ 0x1C01FACC8 (-GiveObject@@YAHIPEAXK@Z.c)
 *     ?IsObjectPublic@@YAPEAUtagPUBOBJ@@PEAX@Z @ 0x1C01FAD1C (-IsObjectPublic@@YAPEAUtagPUBOBJ@@PEAX@Z.c)
 */

__int64 __fastcall AddPublicObject(unsigned int a1, void *a2, int a3)
{
  struct tagPUBOBJ *v6; // rax
  __int64 v7; // rax
  int v8; // ecx

  if ( a1 == 2 || a1 == 9 || a1 == 130 )
  {
    v6 = IsObjectPublic(a2);
    if ( v6 )
    {
      v8 = *((_DWORD *)v6 + 4);
      if ( v8 < 2147483646 )
      {
        *((_DWORD *)v6 + 4) = v8 + 1;
        return 1LL;
      }
      UserSetLastError(-1073741675);
    }
    else
    {
      v7 = Win32AllocPoolZInit(24LL, 878998357LL);
      if ( v7 )
      {
        *(_DWORD *)(v7 + 16) = 1;
        *(_QWORD *)(v7 + 8) = a2;
        *(_DWORD *)(v7 + 20) = a3;
        *(_QWORD *)v7 = gpPublicObjectList;
        gpPublicObjectList = v7;
        GiveObject(a1, a2, 0);
        return 1LL;
      }
    }
  }
  return 0LL;
}
