/*
 * XREFs of VidMmReportMultiAlloc @ 0x1C00F1C40
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0ppppppppppppq_EtwWriteTransfer @ 0x1C002E560 (McTemplateK0ppppppppppppq_EtwWriteTransfer.c)
 */

int __fastcall VidMmReportMultiAlloc(__int64 a1, __int64 a2)
{
  _UNKNOWN **v2; // rax
  __int64 v3; // r9
  __int64 v4; // rdx
  __int64 v5; // r8
  unsigned int v6; // ebx
  unsigned int v7; // edi
  void *v8; // rsi
  __int64 *v9; // r10
  __int64 v10; // r11
  __int64 v11; // r12
  __int64 v12; // rbp
  __int64 v13; // r10
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+0h] BYREF

  v2 = &retaddr;
  v3 = *(_QWORD *)(a2 + 24);
  v4 = 0LL;
  if ( v3 )
  {
    v5 = *(_QWORD *)(v3 + 16);
    v6 = 0;
    v7 = 0;
    v8 = 0LL;
    if ( v5 )
    {
      v2 = *(_UNKNOWN ***)(v5 + 40);
      v6 = *(_DWORD *)(v5 + 16);
      if ( v2 )
      {
        v7 = *((_DWORD *)v2 + 4);
        v8 = v2[6];
      }
    }
    v9 = *(__int64 **)v3;
    if ( bTracingEnabled )
    {
      v10 = *v9;
      v11 = v9[3];
      if ( (**(_DWORD **)(*v9 + 536) & 8) != 0 )
        v12 = *(_QWORD *)(v10 + 392);
      else
        v12 = v9[2];
      v13 = *(_QWORD *)(v5 + 40);
      if ( v13 )
        v4 = *(_QWORD *)(v13 + 56);
      v2 = *(_UNKNOWN ***)(a1 + 40);
      if ( (byte_1C00769C1 & 8) != 0 )
        LODWORD(v2) = McTemplateK0ppppppppppppq_EtwWriteTransfer(
                        v6,
                        &EventReportDeviceAllocation,
                        *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL),
                        *((_QWORD *)v2[8] + 10),
                        a1,
                        *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL),
                        v3,
                        v10,
                        v13,
                        v4,
                        v6,
                        v7,
                        v8,
                        v12,
                        v11);
    }
  }
  return (int)v2;
}
