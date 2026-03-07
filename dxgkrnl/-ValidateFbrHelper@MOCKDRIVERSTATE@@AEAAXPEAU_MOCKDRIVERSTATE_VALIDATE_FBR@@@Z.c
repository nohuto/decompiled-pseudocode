void __fastcall MOCKDRIVERSTATE::ValidateFbrHelper(MOCKDRIVERSTATE *this, struct _MOCKDRIVERSTATE_VALIDATE_FBR *a2)
{
  __int64 v4; // rcx
  unsigned int v5; // r9d
  unsigned int v6; // r11d
  __int64 v7; // rcx
  unsigned int v8; // r8d
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // r14
  __int64 v12; // r10
  int v13; // edx
  int v14; // r8d
  __int64 v15; // rcx

  v4 = *((_QWORD *)this + 3);
  if ( *(_BYTE *)(v4 + 2889) )
  {
    if ( !*(_BYTE *)(*((_QWORD *)this + 1) + 8LL) )
    {
      v5 = *(_DWORD *)(v4 + 1672);
      v6 = *(_DWORD *)(v4 + 2760);
      v7 = 0LL;
      v8 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 )
      {
        while ( 1 )
        {
          v9 = 0LL;
          if ( v5 )
            break;
LABEL_11:
          v7 = (unsigned int)(v7 + 1);
          if ( (unsigned int)v7 >= v8 )
            return;
        }
        while ( 1 )
        {
          v10 = 0LL;
          if ( v6 )
            break;
LABEL_10:
          v9 = (unsigned int)(v9 + 1);
          if ( (unsigned int)v9 >= v5 )
            goto LABEL_11;
        }
        v11 = (unsigned int)v9;
        while ( 1 )
        {
          v12 = *(_QWORD *)(*(_QWORD *)this + 16 * (v10 + 10 * v9) + 56);
          if ( v12 )
          {
            if ( *(_QWORD *)(*((_QWORD *)a2 + 1) + 8 * v7) == v12 )
              break;
          }
          v10 = (unsigned int)(v10 + 1);
          if ( (unsigned int)v10 >= v6 )
            goto LABEL_10;
        }
        WdLogSingleEntry3(2LL, *((_QWORD *)a2 + 2), (unsigned int)v9, (unsigned int)v10);
        if ( bTracingEnabled )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
            McTemplateK0zqqzxxxxx_EtwWriteTransfer(
              0,
              v13,
              v14,
              0LL,
              0,
              -1,
              L"Front buffer rendering detected for dxgprocess:0x%I64x on source:%u, plane:%u",
              *((_QWORD *)a2 + 2),
              v11,
              (unsigned int)v10,
              0LL,
              0LL);
        }
        *(_QWORD *)(*((_QWORD *)this + 1) + 96LL) = *((_QWORD *)a2 + 2);
        *(_DWORD *)(*((_QWORD *)this + 1) + 56LL) = v10;
        *(_BYTE *)(*((_QWORD *)this + 1) + 8LL) = 1;
        v15 = *((_QWORD *)this + 1);
        _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)this + 3) + 24LL));
        *(_QWORD *)(v15 + 16) = -1LL;
        ExQueueWorkItem((PWORK_QUEUE_ITEM)(*((_QWORD *)this + 1) + 24LL), DelayedWorkQueue);
      }
    }
  }
}
