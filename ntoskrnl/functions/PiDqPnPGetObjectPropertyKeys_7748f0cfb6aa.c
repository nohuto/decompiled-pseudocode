__int64 __fastcall PiDqPnPGetObjectPropertyKeys(int a1, int a2, __int64 a3, __int64 a4, PVOID *a5, _DWORD *a6)
{
  unsigned __int64 v9; // rbx
  __int64 Pool2; // rax
  __int64 v11; // r9
  unsigned __int64 v12; // rdx
  int ObjectPropertyKeys; // eax
  unsigned int v14; // ebx
  __int64 v16; // rcx
  int v17; // [rsp+20h] [rbp-48h]

  v9 = 6000LL;
  *a5 = 0LL;
  while ( 1 )
  {
    if ( *a5 )
      ExFreePoolWithTag(*a5, 0x58706E50u);
    Pool2 = ExAllocatePool2(256LL, v9, 1483763280LL);
    *a5 = (PVOID)Pool2;
    if ( !Pool2 )
    {
      v14 = -1073741670;
      goto LABEL_11;
    }
    *a6 = 0;
    v12 = v9 / 0x14;
    if ( a2 )
    {
      ObjectPropertyKeys = PnpGetObjectPropertyKeys(PiPnpRtlCtx, a1, a2, a3, v17, 1, Pool2, v12, (__int64)a6);
    }
    else
    {
      LOBYTE(v11) = 1;
      ObjectPropertyKeys = PnpGetGenericStorePropertyKeys(*(_QWORD *)&PiPnpRtlCtx, a3, 0LL, v11, Pool2, v12, a6);
    }
    v14 = ObjectPropertyKeys;
    if ( ObjectPropertyKeys != -1073741789 )
      break;
    v16 = (unsigned int)*a6;
    if ( (unsigned __int64)(20 * v16) > 0xFFFFFFFF )
    {
      v14 = -1073741675;
      goto LABEL_11;
    }
    v9 = (unsigned int)(20 * v16);
  }
  if ( ObjectPropertyKeys >= 0 )
    goto LABEL_9;
LABEL_11:
  *a6 = 0;
LABEL_9:
  if ( !*a6 && *a5 )
  {
    ExFreePoolWithTag(*a5, 0x58706E50u);
    *a5 = 0LL;
  }
  return v14;
}
