/*
 * XREFs of RtlCopyContext @ 0x1406C0EA8
 * Callers:
 *     PspWow64SetContextThread @ 0x14067A140 (PspWow64SetContextThread.c)
 *     PspWow64GetContextThread @ 0x14067A4EC (PspWow64GetContextThread.c)
 *     PspInitializeThunkContext @ 0x1406C07E0 (PspInitializeThunkContext.c)
 *     PspGetSetContextInternal @ 0x1406C2670 (PspGetSetContextInternal.c)
 *     PspSetContextState @ 0x14090F1F4 (PspSetContextState.c)
 * Callees:
 *     RtlpCopyXStateChunk @ 0x14031A3C8 (RtlpCopyXStateChunk.c)
 *     RtlpCopyLegacyContext @ 0x14033E548 (RtlpCopyLegacyContext.c)
 *     RtlpValidateContextFlags @ 0x14033FD40 (RtlpValidateContextFlags.c)
 *     RtlpGetContextFlagsLocation @ 0x14034021C (RtlpGetContextFlagsLocation.c)
 */

NTSTATUS __cdecl RtlCopyContext(PCONTEXT Context, ULONG ContextFlags, PCONTEXT Source)
{
  _M128A *v6; // rdi
  _M128A *XmmRegisters; // rbp
  NTSTATUS result; // eax
  int v9; // edx
  int *v10; // rax
  int *v11; // r8
  int v12; // r12d
  int v13; // esi
  ULONG v14; // esi
  NTSTATUS v15; // ebx
  int v16; // [rsp+30h] [rbp-38h] BYREF
  _DWORD *ContextFlagsLocation; // [rsp+38h] [rbp-30h]
  int v18; // [rsp+88h] [rbp+20h] BYREF

  v16 = 0;
  v18 = 0;
  v6 = 0LL;
  XmmRegisters = 0LL;
  result = RtlpValidateContextFlags(ContextFlags, 0LL);
  if ( result >= 0 )
  {
    ContextFlagsLocation = (_DWORD *)RtlpGetContextFlagsLocation((__int64)Context, ContextFlags);
    v10 = (int *)RtlpGetContextFlagsLocation((__int64)Source, v9);
    v12 = *v11;
    v13 = *v10;
    result = RtlpValidateContextFlags(ContextFlags | *v10 | *v11, 0LL);
    if ( result >= 0 )
    {
      v14 = ContextFlags & v13;
      result = RtlpValidateContextFlags(v14, &v16);
      if ( result >= 0 )
      {
        result = RtlpValidateContextFlags(v12, &v18);
        v15 = result;
        if ( result >= 0 )
        {
          if ( (~v18 & v16) != 0 )
          {
            return -2147483643;
          }
          else
          {
            RtlpCopyLegacyContext(1, (__int64)Context, v14, (__int64)Source);
            *ContextFlagsLocation |= v12;
            if ( (v18 & 0xFFFFFFFE) != 0 )
            {
              if ( (v14 & 0x10000) != 0 )
              {
                XmmRegisters = (_M128A *)((char *)&Source->1 + 460);
                v6 = (_M128A *)((char *)&Context->1 + 460);
                if ( (v12 & 0x10020) != 65568 && (v14 & 0x10020) == 65568 )
                  *((_DWORD *)&Context->1 + 118) = 716;
              }
              else if ( (ContextFlags & 0x100000) != 0 )
              {
                XmmRegisters = (_M128A *)&Source[1];
                v6 = (_M128A *)&Context[1];
              }
              else if ( (ContextFlags & 0x200000) != 0 )
              {
                XmmRegisters = Source->FltSave.XmmRegisters;
                v6 = Context->FltSave.XmmRegisters;
              }
              else if ( (ContextFlags & 0x400000) != 0 )
              {
                XmmRegisters = &Source->VectorRegister[9];
                v6 = &Context->VectorRegister[9];
              }
            }
            if ( (v16 & 2) == 0 )
              return v15;
            result = RtlpCopyXStateChunk(1, (__int64)v6, (__int64)v6, (__int64)XmmRegisters, (__int64)XmmRegisters);
            v15 = result;
            if ( result >= 0 )
              return v15;
          }
        }
      }
    }
  }
  return result;
}
