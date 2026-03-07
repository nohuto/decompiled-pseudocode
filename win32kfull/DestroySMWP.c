// write access to const memory has been detected, the output may be wrong!
void __fastcall DestroySMWP(__int64 a1)
{
  int v1; // eax
  char v2; // bl
  struct _HANDLEENTRY *v4; // rax
  BOOL v5; // esi
  __int64 v6; // r14
  int v7; // ebp
  _QWORD *v8; // r14
  __int64 v9; // rsi
  char v10; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_DWORD *)(a1 + 24);
  v2 = 0;
  v10 = 0;
  if ( (v1 & 2) != 0 )
  {
    v4 = (struct _HANDLEENTRY *)_HMPheFromObjectWorker();
    IdentifyPrimaryDestroyTarget::Identify((IdentifyPrimaryDestroyTarget *)&v10, v4);
    v2 = v10;
  }
  if ( (*(_DWORD *)(a1 + 24) & 2) != 0 )
  {
    if ( !(unsigned int)HMMarkObjectDestroy(a1) )
      goto LABEL_16;
    v5 = 1;
  }
  else
  {
    v5 = a1 != gSMWP;
  }
  v6 = *(_QWORD *)(a1 + 40);
  if ( v6 )
  {
    v7 = *(_DWORD *)(a1 + 28) - 1;
    if ( v7 >= 0 )
    {
      v8 = (_QWORD *)(v6 + 120);
      do
      {
        if ( *v8 )
          GreDeleteObject(*v8);
        v8 += 21;
        --v7;
      }
      while ( v7 >= 0 );
    }
    if ( v5 )
      Win32FreePool(*(void **)(a1 + 40));
  }
  if ( (*(_DWORD *)(a1 + 24) & 2) != 0 )
  {
    HMFreeObject(a1);
  }
  else if ( v5 )
  {
    Win32FreePool((void *)a1);
  }
  else
  {
    gdwPUDFlags &= ~0x40000000u;
    if ( *(int *)(a1 + 32) > 8 )
    {
      v9 = Win32AllocPoolZInit(672LL, 2004054869LL);
      if ( v9 )
      {
        Win32FreePool(*(void **)(a1 + 40));
        *(_QWORD *)(a1 + 40) = v9;
        *(_DWORD *)(a1 + 32) = 4;
      }
    }
    *(_DWORD *)(a1 + 24) &= ~4u;
  }
LABEL_16:
  if ( v2 )
    gphePrimaryDestroyTarget = 0LL;
}
