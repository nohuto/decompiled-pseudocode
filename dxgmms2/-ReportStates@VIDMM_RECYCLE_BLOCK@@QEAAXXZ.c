/*
 * XREFs of ?ReportStates@VIDMM_RECYCLE_BLOCK@@QEAAXXZ @ 0x1C00C492A
 * Callers:
 *     ?ReportBlockStates@VIDMM_RECYCLE_HEAP@@QEAAXXZ @ 0x1C00F66D4 (-ReportBlockStates@VIDMM_RECYCLE_HEAP@@QEAAXXZ.c)
 * Callees:
 *     McTemplateK0pppppppqq_EtwWriteTransfer @ 0x1C0032258 (McTemplateK0pppppppqq_EtwWriteTransfer.c)
 *     McTemplateK0qxxx_EtwWriteTransfer @ 0x1C00323F4 (McTemplateK0qxxx_EtwWriteTransfer.c)
 */

void __fastcall VIDMM_RECYCLE_BLOCK::ReportStates(VIDMM_RECYCLE_BLOCK *this, __int64 a2, __int64 a3)
{
  char *v3; // r14
  char *i; // rsi
  char *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // [rsp+50h] [rbp-18h]
  __int64 v11; // [rsp+58h] [rbp-10h]

  v3 = (char *)this + 72;
  for ( i = (char *)*((_QWORD *)this + 9); i != v3; i = *(char **)i )
  {
    v6 = i - 120;
    if ( *((_DWORD *)i - 14) == 1
      || *((_DWORD *)i - 14) == 2
      || *((_DWORD *)i - 14) == 3
      || (unsigned int)(*((_DWORD *)i - 14) - 4) <= 1 )
    {
      if ( bTracingEnabled )
      {
        v7 = *((_QWORD *)this + 4);
        a2 = (unsigned int)(*(_DWORD *)v7 - 3) <= 3 ? *((_QWORD *)this + 7) : *((_QWORD *)v6 + 4);
        a3 = *((_QWORD *)v6 + 5) - *((_QWORD *)v6 + 4);
        v8 = *(_QWORD *)(*(_QWORD *)(v7 + 8) + 8LL);
        if ( (byte_1C00769C1 & 8) != 0 )
          McTemplateK0qxxx_EtwWriteTransfer(
            v8,
            &EventCreateProcessAllocationDetails,
            a3,
            *(_DWORD *)(v8 + 8),
            (_BYTE)i - 120,
            a3,
            a2);
      }
    }
    if ( (byte_1C00769C2 & 2) != 0 )
    {
      v9 = *((_QWORD *)this + 4);
      LODWORD(v11) = *((_DWORD *)v6 + 16);
      LODWORD(v10) = *(_DWORD *)v9;
      McTemplateK0pppppppqq_EtwWriteTransfer(
        v9,
        a2,
        a3,
        **(_QWORD **)(*(_QWORD *)(v9 + 8) + 8LL),
        i - 120,
        this,
        *((_QWORD *)this + 7),
        v9,
        *((_QWORD *)v6 + 4),
        *((_QWORD *)v6 + 5),
        v10,
        v11);
    }
  }
}
