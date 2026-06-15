/*
 * XREFs of sub_1800B8630 @ 0x1800B8630
 * Callers:
 *     <none>
 * Callees:
 *     sub_180052600 @ 0x180052600 (sub_180052600.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BA30C @ 0x1800BA30C (sub_1800BA30C.c)
 *     sub_1800BA558 @ 0x1800BA558 (sub_1800BA558.c)
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 *     sub_1800BB524 @ 0x1800BB524 (sub_1800BB524.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_1800B8630(__int64 a1)
{
  __int64 v2; // rdx
  int v3; // edi
  __int64 v4; // rax
  void (__fastcall ***v5)(_QWORD, __int64); // r14
  std::_Ref_count_base *v6; // rcx
  unsigned int v7; // eax
  int v8; // eax
  unsigned int v9; // eax
  int v10; // eax
  unsigned int v11; // eax
  int v12; // eax
  unsigned int v13; // eax

  if ( *(_DWORD *)(a1 + 108) )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)&dwCreationFlags + 56LL))(
      *(_QWORD *)&dwCreationFlags,
      a1 + 72);
    *(_DWORD *)(a1 + 108) = 0;
  }
  sub_1800BA558(a1 + 376);
  sub_1800BA558(a1 + 208);
  if ( qword_18019E640 )
  {
    v2 = *(_QWORD *)(a1 + 200);
    if ( v2 )
    {
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)qword_18019E640 + 40LL))(qword_18019E640, v2, 0LL);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)qword_18019E640 + 64LL))(
        qword_18019E640,
        *(_QWORD *)(a1 + 200));
      *(_QWORD *)(a1 + 200) = 0LL;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 112));
  v3 = 1;
  while ( *(_QWORD *)(a1 + 168) )
  {
    v4 = sub_1800BA30C(a1 + 152);
    v5 = (void (__fastcall ***)(_QWORD, __int64))v4;
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_BYTE *)off_18019C348 + 28) & 4) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 5u )
    {
      sub_1800BB524(*((_QWORD *)off_18019C348 + 2), 26LL, &unk_18016D4B0, *(_QWORD *)(v4 + 8));
    }
    if ( v5 )
      (**v5)(v5, 1LL);
  }
  if ( a1 != -112 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 112));
  qword_18019EED8 = 0LL;
  v6 = qword_18019EEE0;
  qword_18019EEE0 = 0LL;
  if ( v6 )
    sub_180052600(v6);
  if ( *(_DWORD *)(a1 + 64) )
  {
    v7 = RpcServerUnregisterIfEx(&unk_1801494E0, 0LL, 1);
    if ( v7 )
    {
      if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
        && (*((_BYTE *)off_18019C348 + 28) & 0x10) != 0
        && *((_BYTE *)off_18019C348 + 25) >= 4u )
      {
        sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 27LL, &unk_18016D4B0, v7);
      }
      v8 = 1;
    }
    else
    {
      v8 = 0;
    }
    *(_DWORD *)(a1 + 64) = v8;
  }
  if ( *(_DWORD *)(a1 + 56) )
  {
    v9 = RpcServerUnregisterIfEx(&unk_1801495A0, 0LL, 1);
    if ( v9 )
    {
      if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
        && (*((_BYTE *)off_18019C348 + 28) & 0x10) != 0
        && *((_BYTE *)off_18019C348 + 25) >= 4u )
      {
        sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 28LL, &unk_18016D4B0, v9);
      }
      v10 = 1;
    }
    else
    {
      v10 = 0;
    }
    *(_DWORD *)(a1 + 56) = v10;
  }
  if ( *(_DWORD *)(a1 + 60) )
  {
    v11 = RpcServerUnregisterIfEx(&unk_180149540, 0LL, 1);
    if ( v11 )
    {
      if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
        && (*((_BYTE *)off_18019C348 + 28) & 0x10) != 0
        && *((_BYTE *)off_18019C348 + 25) >= 4u )
      {
        sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 29LL, &unk_18016D4B0, v11);
      }
      v12 = 1;
    }
    else
    {
      v12 = 0;
    }
    *(_DWORD *)(a1 + 60) = v12;
  }
  if ( *(_DWORD *)(a1 + 68) )
  {
    v13 = RpcServerUnregisterIfEx(&unk_180149480, 0LL, 1);
    if ( v13 )
    {
      if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
        && (*((_BYTE *)off_18019C348 + 28) & 0x10) != 0
        && *((_BYTE *)off_18019C348 + 25) >= 4u )
      {
        sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 30LL, &unk_18016D4B0, v13);
      }
    }
    else
    {
      v3 = 0;
    }
    *(_DWORD *)(a1 + 68) = v3;
  }
  return 0LL;
}
