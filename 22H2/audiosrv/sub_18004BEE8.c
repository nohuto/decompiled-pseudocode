/*
 * XREFs of sub_18004BEE8 @ 0x18004BEE8
 * Callers:
 *     sub_18004BE0C @ 0x18004BE0C (sub_18004BE0C.c)
 * Callees:
 *     sub_18004BDBC @ 0x18004BDBC (sub_18004BDBC.c)
 *     sub_18004C0D0 @ 0x18004C0D0 (sub_18004C0D0.c)
 *     sub_18004CAD0 @ 0x18004CAD0 (sub_18004CAD0.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B4B44 @ 0x1800B4B44 (sub_1800B4B44.c)
 *     sub_1800B5290 @ 0x1800B5290 (sub_1800B5290.c)
 *     sub_1800B52B0 @ 0x1800B52B0 (sub_1800B52B0.c)
 *     sub_1800B5EE4 @ 0x1800B5EE4 (sub_1800B5EE4.c)
 */

void __fastcall sub_18004BEE8(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        unsigned int a8,
        _WORD *a9,
        int a10,
        LPCWSTR lpOutputString,
        int a12,
        _BYTE *a13,
        int a14,
        __int64 a15)
{
  unsigned int v17; // edi
  int v19; // ebp
  int v20; // eax
  _WORD *v21; // rax
  DWORD CurrentThreadId; // eax
  __int64 (*v23)(void); // rax
  __int64 v24; // rax
  int v25; // eax

  v17 = a8;
  v19 = 0;
  *lpOutputString = 0;
  *a13 = 0;
  if ( a7 )
  {
    switch ( a7 )
    {
      case 1:
        v20 = sub_18004C0D0(a8);
        break;
      case 2:
        if ( (a8 & 0x80000000) == 0 )
        {
          v17 = -2147024228;
          sub_18004BDBC(a1, a2, a3, a4, a5, a6, 2, -2147024228);
        }
        v20 = sub_1800B52B0(v17);
        break;
      case 3:
        v20 = sub_18004CAD0(a8);
        break;
      default:
        goto LABEL_5;
    }
  }
  else
  {
    v20 = sub_1800B5290(a8);
  }
  v19 = v20;
LABEL_5:
  *(_DWORD *)a15 = a7;
  *(_DWORD *)(a15 + 4) = v17;
  *(_DWORD *)(a15 + 8) = _InterlockedIncrement(&dword_18019E818);
  v21 = a9;
  if ( !a9 || !*a9 )
    v21 = 0LL;
  *(_QWORD *)(a15 + 16) = v21;
  CurrentThreadId = GetCurrentThreadId();
  *(_QWORD *)(a15 + 48) = a3;
  *(_DWORD *)(a15 + 24) = CurrentThreadId;
  *(_QWORD *)(a15 + 32) = a5;
  *(_QWORD *)(a15 + 128) = a6;
  *(_QWORD *)(a15 + 136) = a1;
  v23 = (__int64 (*)(void))qword_18019F930;
  *(_DWORD *)(a15 + 56) = a2;
  *(_DWORD *)(a15 + 60) = v19;
  *(_QWORD *)(a15 + 40) = a4;
  *(_QWORD *)(a15 + 64) = 0LL;
  *(_OWORD *)(a15 + 72) = 0LL;
  *(_OWORD *)(a15 + 88) = 0LL;
  *(_OWORD *)(a15 + 104) = 0LL;
  if ( v23 )
    v24 = v23();
  else
    v24 = 0LL;
  *(_QWORD *)(a15 + 120) = v24;
  if ( qword_18019E3B0 )
    qword_18019E3B0(a15, a13, 1024LL);
  if ( qword_18019F9E0 )
    qword_18019F9E0(a15);
  if ( qword_18019F9F0 )
    qword_18019F9F0(a15);
  if ( *(int *)(a15 + 4) >= 0 )
  {
    if ( a7 != 3 )
      sub_1800B5EE4();
    *(_DWORD *)(a15 + 4) = -2147418113;
  }
  if ( byte_18019F9B0 )
    goto LABEL_40;
  if ( qword_18019F9A8 )
  {
    v25 = (unsigned __int8)qword_18019F9A8();
  }
  else
  {
    if ( IsDebuggerPresent() )
      goto LABEL_40;
    v25 = 0;
  }
  if ( !v25 )
  {
    if ( qword_18019F9B8 && !byte_18019F9D0 )
      qword_18019F9B8(a15, 0LL, 0LL);
    goto LABEL_22;
  }
LABEL_40:
  if ( qword_18019F9B8 && !byte_18019F9D0 )
    qword_18019F9B8(a15, lpOutputString, 2048LL);
  if ( !*lpOutputString )
    sub_1800B4B44(lpOutputString, 2048LL, a15);
  OutputDebugStringW(lpOutputString);
LABEL_22:
  if ( byte_18019F9C0 )
  {
    if ( qword_18019F920 )
      qword_18019F920();
  }
}
