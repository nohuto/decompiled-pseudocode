/*
 * XREFs of sub_180004130 @ 0x180004130
 * Callers:
 *     sub_180003F3C @ 0x180003F3C (sub_180003F3C.c)
 *     sub_180004014 @ 0x180004014 (sub_180004014.c)
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_1800B5768 @ 0x1800B5768 (sub_1800B5768.c)
 *     sub_1800CA660 @ 0x1800CA660 (sub_1800CA660.c)
 */

__int64 __fastcall sub_180004130(__int64 a1, DWORD *a2)
{
  void *v4; // rcx
  void *v5; // rax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r9
  HANDLE v10[3]; // [rsp+30h] [rbp-18h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]

  v4 = *(void **)(a1 + 88);
  if ( (((unsigned __int64)v4 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    v7 = -2004287472;
    v8 = 183LL;
LABEL_6:
    sub_18004BD84(retaddr, v8, "avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp", v7);
    return v7;
  }
  v5 = *(void **)(a1 + 112);
  v10[1] = v4;
  v10[0] = v5;
  if ( WaitForMultipleObjectsEx(2u, v10, 0, 0xFFFFFFFF, 0) != 1 )
    return 0LL;
  if ( !GetExitCodeProcess(*(HANDLE *)(a1 + 88), a2) )
    return sub_1800B5768(retaddr, 195LL, "avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp");
  v9 = *a2;
  if ( (_DWORD)v9 == -1073740760 )
  {
    v7 = -2147024319;
    v8 = 197LL;
    goto LABEL_6;
  }
  if ( !(_DWORD)v9 )
    return 0LL;
  return sub_1800CA660(retaddr, 201LL, "avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp", v9);
}
