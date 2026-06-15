/*
 * XREFs of sub_180035850 @ 0x180035850
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003E08 @ 0x180003E08 (sub_180003E08.c)
 *     sub_18002BB70 @ 0x18002BB70 (sub_18002BB70.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800FFF80 @ 0x1800FFF80 (sub_1800FFF80.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180035850(__int64 a1, _WORD *a2, __int64 a3)
{
  unsigned __int64 i; // rax
  __int64 v7; // rcx
  __int64 v9; // rdx
  __int64 *v10; // rax
  __int64 *v11; // r14
  __int64 v12; // rax

  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800FFF80(*((_QWORD *)off_18019C348 + 2), (_DWORD)a2, a3, (_DWORD)a2, a3, *(_DWORD *)(a3 + 16));
  }
  for ( i = 0LL; i < 0x50; i += 16LL )
  {
    v7 = *(__int64 *)((char *)&off_18019C550 + i);
    if ( *(_DWORD *)(a3 + 16) == *(_DWORD *)(v7 + 16) )
    {
      v9 = *(_QWORD *)a3 - *(_QWORD *)v7;
      if ( *(_QWORD *)a3 == *(_QWORD *)v7 )
        v9 = *(_QWORD *)(a3 + 8) - *(_QWORD *)(v7 + 8);
      if ( !v9 )
      {
        v10 = (__int64 *)sub_18006A18C(48LL, &unk_18019F848);
        v11 = v10;
        if ( v10 )
        {
          sub_180003E08(v10, (__int64)&qword_18019F818);
          v11[4] = a1;
          if ( a1 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
          v11[5] = 0LL;
        }
        else
        {
          v11 = 0LL;
        }
        if ( v11 )
        {
          if ( a2 )
          {
            v12 = -1LL;
            do
              ++v12;
            while ( a2[v12] );
          }
          else
          {
            LODWORD(v12) = 0;
          }
          sub_18002BB70(v11, a2, v12);
          JUMPOUT(0x180098CACLL);
        }
        JUMPOUT(0x180098D49LL);
      }
    }
  }
  return 0LL;
}
