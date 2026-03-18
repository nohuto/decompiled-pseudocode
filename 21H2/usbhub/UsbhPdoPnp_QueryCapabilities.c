/*
 * XREFs of UsbhPdoPnp_QueryCapabilities @ 0x1C0054AC0
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     PdoExt @ 0x1C000B490 (PdoExt.c)
 *     memset @ 0x1C001F800 (memset.c)
 */

__int64 __fastcall UsbhPdoPnp_QueryCapabilities(__int64 a1, IRP *a2)
{
  _DWORD *v3; // rbp
  _IO_SECURITY_CONTEXT *SecurityContext; // rsi
  __int16 SecurityQos; // di
  __int16 v6; // bx
  int SecurityQos_high; // eax
  unsigned int v8; // edx
  int v9; // eax
  unsigned int v10; // r8d
  unsigned int v11; // ecx
  int v12; // eax
  unsigned int v13; // edx
  _IO_SECURITY_CONTEXT *v14; // r8
  int v15; // ecx
  int v16; // eax
  __int64 v17; // rdx
  int v18; // ecx
  BOOL v19; // eax
  int v20; // ecx
  BOOL v21; // eax

  v3 = PdoExt(a1);
  SecurityContext = a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  SecurityQos = (__int16)SecurityContext->SecurityQos;
  v6 = WORD1(SecurityContext->SecurityQos);
  memset(SecurityContext, 0, 0x40uLL);
  SecurityQos_high = HIDWORD(SecurityContext->SecurityQos);
  WORD1(SecurityContext->SecurityQos) = v6;
  v8 = SecurityQos_high & 0xFFFFFFEF;
  LOWORD(SecurityContext->SecurityQos) = SecurityQos;
  v9 = SecurityQos_high | 0x10;
  if ( (v3[295] & 0x10) == 0 )
    v8 = v9;
  HIDWORD(SecurityContext->SecurityQos) = v8;
  v10 = v8 & 0xFFFFFDBF | (v3[355] >> 3) & 0x40;
  HIDWORD(SecurityContext->SecurityQos) = v10;
  v11 = v10;
  v12 = *((unsigned __int16 *)v3 + 714);
  HIDWORD(SecurityContext->AccessState) = -1;
  LODWORD(SecurityContext->AccessState) = v12;
  v13 = v3[298];
  if ( !v13 )
  {
    v13 = 0;
    if ( *((_QWORD *)v3 + 148) )
    {
      if ( (v3[355] & 0x40000) == 0 )
      {
        v13 = FdoExt(*((_QWORD *)v3 + 148))[1259];
        v3[298] = v13;
        v11 = HIDWORD(SecurityContext->SecurityQos);
      }
    }
  }
  SecurityContext[1].FullCreateOptions = v13;
  v14 = SecurityContext + 1;
  v15 = v11 | 0x400;
  SecurityContext->FullCreateOptions = 1;
  v16 = v3[355];
  *(_SECURITY_QUALITY_OF_SERVICE **)((char *)&SecurityContext[2].SecurityQos + 4) = 0LL;
  HIDWORD(SecurityContext[2].AccessState) = 0;
  v17 = 5LL;
  if ( (v16 & 0x100) != 0 )
  {
    LODWORD(SecurityContext[2].SecurityQos) = 3;
    HIDWORD(SecurityContext->SecurityQos) = v15 & 0xFFFFC7FC | 0x1803;
    v18 = 2;
    do
    {
      v19 = v18++ > (signed int)SecurityContext[1].FullCreateOptions;
      LODWORD(v14->SecurityQos) = v19 + 3;
      v14 = (_IO_SECURITY_CONTEXT *)((char *)v14 + 4);
      --v17;
    }
    while ( v17 );
  }
  else
  {
    LODWORD(SecurityContext[2].SecurityQos) = 1;
    HIDWORD(SecurityContext->SecurityQos) = v15 & 0xFFFFC7FC;
    v20 = 2;
    do
    {
      v21 = v20++ > (signed int)SecurityContext[1].FullCreateOptions;
      LODWORD(v14->SecurityQos) = v21 + 3;
      v14 = (_IO_SECURITY_CONTEXT *)((char *)v14 + 4);
      --v17;
    }
    while ( v17 );
  }
  if ( (v3[283] & 4) != 0 )
    HIDWORD(SecurityContext->SecurityQos) |= 0x100u;
  a2->IoStatus.Status = 0;
  IofCompleteRequest(a2, 0);
  return 0LL;
}
