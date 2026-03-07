__int64 __fastcall AcpiPccAcquireSubspaceCore(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int v8; // ebx
  KSPIN_LOCK *v9; // r14
  KIRQL v10; // r15
  int v11; // eax
  int v12; // ecx
  __int64 v13; // rdi
  _QWORD *v14; // rax
  unsigned int v15; // eax

  if ( a2 )
  {
    v9 = (KSPIN_LOCK *)(a1 + 648);
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 648));
    v11 = *(_DWORD *)(a1 + 4);
    v12 = v11 & 0x1E;
    if ( v12 == 6 )
    {
      *(_QWORD *)(a1 + 248) = a2;
      *(_QWORD *)(a1 + 256) = a3;
      *(_DWORD *)(a1 + 4) = v11 & 0xFFFFFFE1 | 8;
      v8 = 259;
      KeInsertQueueDpc((PRKDPC)(a1 + 576), 0LL, 0LL);
LABEL_16:
      KeReleaseSpinLock(v9, v10);
      return v8;
    }
    if ( a4 )
    {
      v13 = a1 + 232;
      v14 = *(_QWORD **)(v13 + 8);
      if ( *v14 != v13 )
        __fastfail(3u);
      *a4 = v13;
      a4[1] = v14;
      *v14 = a4;
      *(_QWORD *)(v13 + 8) = a4;
      a4[6] = a2;
    }
    else
    {
      if ( v12 == 16 )
      {
        v15 = v11 & 0xFFFFFFE1 | 0x14;
      }
      else
      {
        if ( v12 != 18 )
        {
          v8 = -1073740024;
          goto LABEL_16;
        }
        v15 = v11 & 0xFFFFFFE1 | 0x16;
      }
      *(_DWORD *)(a1 + 4) = v15;
      *(_QWORD *)(a1 + 248) = a2;
      *(_QWORD *)(a1 + 256) = a3;
    }
    v8 = 259;
    goto LABEL_16;
  }
  return (unsigned int)-1073741811;
}
