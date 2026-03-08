/*
 * XREFs of ?LogEtw@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1C0328024
 * Callers:
 *     ?LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z @ 0x1C0328448 (-LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z.c)
 * Callees:
 *     McTemplateK0qqqqq_EtwWriteTransfer @ 0x1C0041810 (McTemplateK0qqqqq_EtwWriteTransfer.c)
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x1C0053520 (McTemplateK0qqq_EtwWriteTransfer.c)
 *     McTemplateK0qqqddt_EtwWriteTransfer @ 0x1C005359C (McTemplateK0qqqddt_EtwWriteTransfer.c)
 *     McTemplateK0qqqiiqttddtqq_EtwWriteTransfer @ 0x1C005365C (McTemplateK0qqqiiqttddtqq_EtwWriteTransfer.c)
 *     McTemplateK0qqqq_EtwWriteTransfer @ 0x1C00537A8 (McTemplateK0qqqq_EtwWriteTransfer.c)
 *     McTemplateK0qqqqqqqDR6qDR8_EtwWriteTransfer @ 0x1C0053848 (McTemplateK0qqqqqqqDR6qDR8_EtwWriteTransfer.c)
 *     McTemplateK0qqqqqqqdd_EtwWriteTransfer @ 0x1C0053954 (McTemplateK0qqqqqqqdd_EtwWriteTransfer.c)
 *     McTemplateK0qqqqqqqddqq_EtwWriteTransfer @ 0x1C0053A48 (McTemplateK0qqqqqqqddqq_EtwWriteTransfer.c)
 *     McTemplateK0qqqqqqqqqDR8_EtwWriteTransfer @ 0x1C0053B60 (McTemplateK0qqqqqqqqqDR8_EtwWriteTransfer.c)
 *     McTemplateK0qqqqqtqtq_EtwWriteTransfer @ 0x1C0053C64 (McTemplateK0qqqqqtqtq_EtwWriteTransfer.c)
 */

void __fastcall OUTPUTDUPL_MGR::LogEtw(OUTPUTDUPL_MGR *this, struct _DXGK_DIAG_OUTPUTDUPL_HEADER *a2, __int64 a3)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  int v5; // ecx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // ecx
  __int64 v10; // rcx
  int v11; // r9d
  unsigned __int64 v12; // r8
  char *v13; // [rsp+60h] [rbp-28h]

  v3 = *((unsigned int *)a2 + 12);
  if ( (int)v3 > 5 )
  {
    v7 = (unsigned int)(v3 - 6);
    if ( (_DWORD)v7 )
    {
      v8 = (unsigned int)(v7 - 1);
      if ( (_DWORD)v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          v10 = (unsigned int)(v9 - 1);
          if ( (_DWORD)v10 )
          {
            if ( (_DWORD)v10 == 1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              McTemplateK0qqqq_EtwWriteTransfer(
                v10,
                (__int64)a2,
                a3,
                *((_DWORD *)a2 + 10),
                *((_DWORD *)a2 + 11),
                *((_DWORD *)a2 + 13),
                *((_DWORD *)a2 + 14));
          }
          else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          {
            McTemplateK0qqqqqqqddqq_EtwWriteTransfer(
              v10,
              (__int64)a2,
              a3,
              *((_DWORD *)a2 + 10),
              *((_DWORD *)a2 + 11),
              *((_DWORD *)a2 + 13),
              *((_DWORD *)a2 + 14),
              *((_DWORD *)a2 + 15),
              *((_DWORD *)a2 + 16),
              *((_DWORD *)a2 + 17),
              *((_DWORD *)a2 + 18),
              *((_DWORD *)a2 + 19),
              *((_DWORD *)a2 + 21),
              *((_DWORD *)a2 + 20));
          }
        }
        else
        {
          v11 = *((_DWORD *)a2 + 14);
          v12 = *((unsigned int *)a2 + 16);
          if ( v11 )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              McTemplateK0qqqqqqqqqDR8_EtwWriteTransfer(
                (__int64)a2 + 72,
                &Dxgk_Diag_OutputDupl_Get_Meta_Data_Move,
                v12,
                *((_DWORD *)a2 + 10),
                *((_DWORD *)a2 + 11),
                *((_DWORD *)a2 + 13),
                v11,
                *((_DWORD *)a2 + 15),
                v12,
                *((_DWORD *)a2 + 17),
                v12 / 0x18,
                6 * (v12 / 0x18),
                (__int64)a2 + 72);
          }
          else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          {
            McTemplateK0qqqqqqqqqDR8_EtwWriteTransfer(
              4 * ((unsigned int)v12 >> 4),
              &Dxgk_Diag_OutputDupl_Get_Meta_Data_Dirty,
              v12,
              *((_DWORD *)a2 + 10),
              *((_DWORD *)a2 + 11),
              *((_DWORD *)a2 + 13),
              0,
              *((_DWORD *)a2 + 15),
              v12,
              *((_DWORD *)a2 + 17),
              (unsigned int)v12 >> 4,
              4 * ((unsigned int)v12 >> 4),
              (__int64)a2 + 72);
          }
        }
      }
      else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      {
        McTemplateK0qqqiiqttddtqq_EtwWriteTransfer(
          v8,
          (__int64)a2,
          a3,
          *((_DWORD *)a2 + 10),
          *((_DWORD *)a2 + 11),
          *((_DWORD *)a2 + 13),
          *((_QWORD *)a2 + 7),
          *((_QWORD *)a2 + 8),
          *((_DWORD *)a2 + 18),
          *((_DWORD *)a2 + 19),
          *((_DWORD *)a2 + 20),
          *((_DWORD *)a2 + 21),
          *((_DWORD *)a2 + 22),
          *((_DWORD *)a2 + 23),
          *((_DWORD *)a2 + 24),
          *((_DWORD *)a2 + 25));
      }
    }
    else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      McTemplateK0qqqqqtqtq_EtwWriteTransfer(
        v7,
        (__int64)a2,
        a3,
        *((_DWORD *)a2 + 10),
        *((_DWORD *)a2 + 11),
        *((_DWORD *)a2 + 13),
        *((_DWORD *)a2 + 14),
        *((_DWORD *)a2 + 15),
        *((_DWORD *)a2 + 16),
        *((_DWORD *)a2 + 17),
        *((_DWORD *)a2 + 18),
        *((_DWORD *)a2 + 19));
    }
  }
  else if ( (_DWORD)v3 == 5 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0qqq_EtwWriteTransfer(
        v3,
        &Dxgk_Diag_OutputDupl_High_Level_Update_Start,
        a3,
        *((_DWORD *)a2 + 10),
        *((_DWORD *)a2 + 11),
        *((_DWORD *)a2 + 13));
  }
  else if ( (_DWORD)v3 )
  {
    v4 = (unsigned int)(v3 - 1);
    if ( (_DWORD)v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = (unsigned int)(v5 - 1);
        if ( (_DWORD)v6 )
        {
          if ( (_DWORD)v6 == 1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0qqqddt_EtwWriteTransfer(
              v6,
              (__int64)a2,
              a3,
              *((_DWORD *)a2 + 10),
              *((_DWORD *)a2 + 11),
              *((_DWORD *)a2 + 13),
              *((_DWORD *)a2 + 14),
              *((_DWORD *)a2 + 15),
              *((_DWORD *)a2 + 16));
        }
        else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        {
          McTemplateK0qqqqqqqdd_EtwWriteTransfer(
            v6,
            (__int64)a2,
            a3,
            *((_DWORD *)a2 + 10),
            *((_DWORD *)a2 + 11),
            *((_DWORD *)a2 + 13),
            *((_DWORD *)a2 + 14),
            *((_DWORD *)a2 + 15),
            *((_DWORD *)a2 + 16),
            *((_DWORD *)a2 + 17),
            *((_DWORD *)a2 + 18),
            *((_DWORD *)a2 + 19));
        }
      }
      else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      {
        v13 = (char *)a2 + 16 * *((unsigned int *)a2 + 15) + 72;
        McTemplateK0qqqqqqqDR6qDR8_EtwWriteTransfer(
          (unsigned int)(4 * *((_DWORD *)a2 + 15)),
          (__int64)v13,
          (unsigned int)(6 * *((_DWORD *)a2 + 16)),
          *((_DWORD *)a2 + 10),
          *((_DWORD *)a2 + 11),
          *((_DWORD *)a2 + 13),
          *((_DWORD *)a2 + 14),
          *((_DWORD *)a2 + 15),
          *((_DWORD *)a2 + 16),
          4 * *((_DWORD *)a2 + 15),
          (__int64)a2 + 72,
          6 * *((_DWORD *)a2 + 16),
          (__int64)v13);
      }
    }
    else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      McTemplateK0qqqqq_EtwWriteTransfer(
        v4,
        &Dxgk_Diag_OutputDupl_Destroy,
        a3,
        *((_DWORD *)a2 + 10),
        *((_DWORD *)a2 + 11),
        *((_DWORD *)a2 + 13),
        *((_DWORD *)a2 + 14),
        *((_DWORD *)a2 + 15));
    }
  }
  else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    McTemplateK0qqqqq_EtwWriteTransfer(
      v3,
      &Dxgk_Diag_OutputDupl_Connect,
      a3,
      *((_DWORD *)a2 + 10),
      *((_DWORD *)a2 + 11),
      *((_DWORD *)a2 + 13),
      *((_DWORD *)a2 + 14),
      *((_DWORD *)a2 + 15));
  }
}
