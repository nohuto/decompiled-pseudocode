/*
 * XREFs of sub_180106F68 @ 0x180106F68
 * Callers:
 *     sub_180109320 @ 0x180109320 (sub_180109320.c)
 * Callees:
 *     sub_180106378 @ 0x180106378 (sub_180106378.c)
 *     sub_180106674 @ 0x180106674 (sub_180106674.c)
 *     sub_180108708 @ 0x180108708 (sub_180108708.c)
 *     sub_180109F18 @ 0x180109F18 (sub_180109F18.c)
 *     sub_18010A130 @ 0x18010A130 (sub_18010A130.c)
 *     sub_18010B7C4 @ 0x18010B7C4 (sub_18010B7C4.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_180106F68(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  struct _RTL_CRITICAL_SECTION *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int128 v11; // [rsp+30h] [rbp-50h]
  __int64 (__fastcall **v12)(); // [rsp+40h] [rbp-40h] BYREF
  __int128 v13; // [rsp+48h] [rbp-38h]
  __int64 (__fastcall ***v14)(); // [rsp+78h] [rbp-8h]
  __int64 v15; // [rsp+A0h] [rbp+20h] BYREF

  v8 = (struct _RTL_CRITICAL_SECTION *)(a1 + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 64));
  sub_18010A130("Sarm::CSpatialAudioResourceManager::HandleRequestForDynamicObjects", 525LL);
  v9 = sub_180106674(a1, a2);
  if ( v9 )
  {
    v15 = 0LL;
    if ( (int)sub_18010B7C4(v9, a3, a4, &v15, v8) >= 0 && v15 > 0 )
    {
      sub_180106378(a1 + 344, v15);
      *(_QWORD *)&v11 = a1;
      *((_QWORD *)&v11 + 1) = a2;
      v12 = off_1801558B0;
      v13 = v11;
      v14 = &v12;
      sub_180108708(a1 + 344, &v12);
    }
  }
  else
  {
    sub_180109F18(v10, 530LL, a2);
  }
  if ( v8 )
    LeaveCriticalSection(v8);
}
