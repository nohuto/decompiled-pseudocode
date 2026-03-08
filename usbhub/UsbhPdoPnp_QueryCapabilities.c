/*
 * XREFs of UsbhPdoPnp_QueryCapabilities @ 0x1C00553A0
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     memset @ 0x1C0023880 (memset.c)
 */

__int64 __fastcall UsbhPdoPnp_QueryCapabilities(__int64 a1, IRP *a2)
{
  _DWORD *v3; // rbp
  _IO_SECURITY_CONTEXT *SecurityContext; // rsi
  __int16 SecurityQos; // di
  __int16 v6; // bx
  int SecurityQos_high; // edx
  int v8; // eax
  unsigned int v9; // edx
  int v10; // eax
  unsigned int v11; // ecx
  _IO_SECURITY_CONTEXT *v12; // r8
  int v13; // eax
  int v14; // ecx
  __int64 v15; // rdx
  int v16; // ecx
  BOOL v17; // eax
  int v18; // ecx
  BOOL v19; // eax

  v3 = PdoExt(a1);
  SecurityContext = a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  SecurityQos = (__int16)SecurityContext->SecurityQos;
  v6 = WORD1(SecurityContext->SecurityQos);
  memset(SecurityContext, 0, 0x40uLL);
  SecurityQos_high = HIDWORD(SecurityContext->SecurityQos);
  v8 = SecurityQos_high | 0x10;
  WORD1(SecurityContext->SecurityQos) = v6;
  LOWORD(SecurityContext->SecurityQos) = SecurityQos;
  v9 = SecurityQos_high & 0xFFFFFFEF;
  if ( (v3[295] & 0x10) == 0 )
    v9 = v8;
  HIDWORD(SecurityContext->SecurityQos) = v9;
  HIDWORD(SecurityContext->SecurityQos) = v9 & 0xFFFFFDBF | (v3[355] >> 3) & 0x40;
  v10 = *((unsigned __int16 *)v3 + 714);
  HIDWORD(SecurityContext->AccessState) = -1;
  LODWORD(SecurityContext->AccessState) = v10;
  v11 = v3[298];
  if ( !v11 && *((_QWORD *)v3 + 148) && (v3[355] & 0x40000) == 0 )
  {
    v11 = FdoExt(*((_QWORD *)v3 + 148))[1259];
    v3[298] = v11;
  }
  SecurityContext[1].FullCreateOptions = v11;
  v12 = SecurityContext + 1;
  SecurityContext->FullCreateOptions = 1;
  v13 = v3[355];
  v14 = HIDWORD(SecurityContext->SecurityQos) | 0x400;
  *(_SECURITY_QUALITY_OF_SERVICE **)((char *)&SecurityContext[2].SecurityQos + 4) = 0LL;
  v15 = 5LL;
  HIDWORD(SecurityContext[2].AccessState) = 0;
  if ( (v13 & 0x100) != 0 )
  {
    LODWORD(SecurityContext[2].SecurityQos) = 3;
    HIDWORD(SecurityContext->SecurityQos) = v14 & 0xFFFFC7FC | 0x1803;
    v16 = 2;
    do
    {
      v17 = v16++ > (signed int)SecurityContext[1].FullCreateOptions;
      LODWORD(v12->SecurityQos) = v17 + 3;
      v12 = (_IO_SECURITY_CONTEXT *)((char *)v12 + 4);
      --v15;
    }
    while ( v15 );
  }
  else
  {
    LODWORD(SecurityContext[2].SecurityQos) = 1;
    HIDWORD(SecurityContext->SecurityQos) = v14 & 0xFFFFC7FC;
    v18 = 2;
    do
    {
      v19 = v18++ > (signed int)SecurityContext[1].FullCreateOptions;
      LODWORD(v12->SecurityQos) = v19 + 3;
      v12 = (_IO_SECURITY_CONTEXT *)((char *)v12 + 4);
      --v15;
    }
    while ( v15 );
  }
  if ( (v3[283] & 4) != 0 )
    HIDWORD(SecurityContext->SecurityQos) |= 0x100u;
  a2->IoStatus.Status = 0;
  IofCompleteRequest(a2, 0);
  return 0LL;
}
